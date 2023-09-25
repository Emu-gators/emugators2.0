//This Server file utilizes code from https://www.geeksforgeeks.org/socket-programming-cc/

// Server side C/C++ program to demonstrate Socket
// programming
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QLabel>
#include <QDrag>
#include <QMouseEvent>
#include <QMimeData>
#include <string>
#include <QProcess>
//#include <QTest>
//Named Pipe includes
#include <stdlib.h>
#include <stdio.h>
#include <QMainWindow>
//#include <sys/stat.h>
//#include <sys/types.h>
//#include <fcntl.h>
//#include <unistd.h>
#include <QThread>
//#include <string.h>

//Socket Programming
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080

#include <QtCore>
#include <QtGui>
#include <QPushButton>
#include <QGridLayout>
#include <QMediaPlayer>


char* hello = "Hello from server";


/*
 * This is the constructor for the MainWindow of the GUI application
 * It sets up the UI elements of the program as well as loading the
 * images for the aesthetic elements and ROMs. This function also sets
 * up the server side of the socket that will be used to communicate with
 * FCEUX.
 * 
 */
  
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //Setup UI based on UI file
    ui->setupUi(this);
    curRom = 0;
    draggedRom = 0;

    connect(ui->debugButton, SIGNAL(click()), this, SLOT(openNewWindow()));
    //QGridLayout *gridLayout = new QGridLayout;
    // addWidget(*Widget, row, column, rowspan, colspan)
    //gridLayout->addWidget(ui->nextButton,0,10,0.25,0.25);
    //gridLayout->addWidget(ui->previousButton,0,0,0.25,0.25);
    //gridLayout->addWidget(ui->debugButton,0,2,1,1);
    //this->centralWidget()->setLayout(gridLayout);
    
    //Load the GUI images, ROM images, and ROM paths from default specified directories
    loadGUIImages();
    loadROMPaths();
    displayCurROM();
    
    //Socket server code specified below was adapted from an example at
    //www.geeksforgeeks.org/socket-programming-cc/
    //Socket Server code sample
    int valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = { 0 };
    

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
	    perror("socket failed");
	    exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET,
			    SO_REUSEADDR | SO_REUSEPORT, &opt,
			    sizeof(opt))) {
	    perror("setsockopt");
	    exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    printf("attached socket \n");
	// Forcefully attaching socket to the port 8080
	if (bind(server_fd, (struct sockaddr*)&address,
			sizeof(address))
		< 0) {
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
    printf("Binding on socket \n");
	if (listen(server_fd, 3) < 0) {
		perror("listen");
		exit(EXIT_FAILURE);
	}
    //Launching FCEUX
    OpenFCEUX();
    printf("Listening on socket \n");
	if ((new_socket
		= accept(server_fd, (struct sockaddr*)&address,
				(socklen_t*)&addrlen))
		< 0) {
		perror("accept");
		exit(EXIT_FAILURE);
	}
    printf("Accepted on socket \n");
    valread = read(new_socket, buffer, 1024);
    printf("%s\n", buffer);
    send(new_socket, hello, strlen(hello), 0);
    printf("Hello message sent\n");
    
}

/*
 * Destructor for the mainwindow when program is closing/shutting down.
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Opens NewWindow which is used for debugging. This function is called
 * when the debug button is clicked.
 * 
 */ 
void MainWindow::openNewWindow()
{
    mMyNewWindow = new NewWindow();

    mMyNewWindow->show();

}
/*
 * 
 * Function to launch FCEUX using the command line.
 * 
 */ 
void MainWindow::OpenFCEUX(){
    printf("Opening FCEUX\n");
    std::string command = "gtk-launch fceux\n";
    char* c = const_cast<char*>(command.c_str());
    system(c);
};

/*
 * 
 * This function iterates through the default directory to load in all availble rom file paths.
 * It also loads the corresponding picture for each rom. This function makes a few assumptions
 * about the directory structure and naming conventions of the ROM and ROM image files which
 * will all be stated in the GUIBuildInstructions file.
 * 
 */ 
 //TODO: update this function to take in a path so that it can 
void MainWindow::loadROMPaths()
{
    //Declare/define iterator
    QDirIterator iter("/home/emugators/Documents/ROMS/emugator/ROMs", QDirIterator::Subdirectories);
    //Call the iterator twice to get through directories "." and ".."
    iter.next();
    iter.next();
    //Go through entire directory
    while(iter.hasNext())
    {
	//Get current directory entry
	QString currentRom = iter.next();
	//Load current directory entry into romPaths vector
	romPaths.push_back(currentRom.toStdString());
	//Find corresponding rom image in the default rom image directory
	std::string currentRomImagePath = convertExtension("/home/emugators/Documents/ROMS/emugator/ROM_Carts/",currentRom.toStdString());
	//Define rom image
	QImage currentRomImage(QString::fromStdString(currentRomImagePath));
	//Resize the rom image
	currentRomImage = processImage(currentRomImage);
	//Add processed rom image to the vector of rom images
	roms.push_back(currentRomImage);
    }
}

/*
 * 
 * Converts the .nes extension of a rom file to .jpg to have the name of the corresponding rom image
 * file.
 * @param
 * romImageDir- Root directory of where the rom images are stored
 * path - full file path of the rom file
 * @return string of rom image path for the inputted rom file.
 * 
 */ 
std::string MainWindow::convertExtension(std::string romImageDir, std::string path)
{
    //Find the last '/' to be able to isolate the rom file name
    int nameIndex = path.find_last_of('/');
    //Get the substring of the path that just has the rom file name
    path = path.substr(nameIndex + 1);
    //Replace the .nes extension of the rom file path with .jpg
    path = romImageDir + path.substr(0, path.size()-4)+ ".jpg";
    //Print out the path for debugging purposes
    qDebug() << QString::fromStdString(path);
    //Return the path of the rom file image
    return path;
}

/*
 * 
 * processImage takes in the rom image file and scales it to fit within our
 * specified area on the shelf.
 * @param
 * unprocessedImage- Qimage of the specified rom image which we want to scale
 * before pushing into our vector of rom images.
 * @return image which is scaled to the appropriate size
 * 
 */ 
QImage MainWindow::processImage(QImage unprocessedImage)
{
    //Scale the inputted image to 100x100 to keep uniformity between rom images
    QImage scaled = unprocessedImage.scaled(100,100,Qt::KeepAspectRatio);
    return scaled;
}

/*
 * 
 * loadGUIImages loads the GUI aesthetic element images, scales them to the appropriate
 * size and then connects them with the corresponding element in the ui
 * 
 */ 
void MainWindow::loadGUIImages()
{
    //Loads the background image, scales it, and then connects it to the background ui
    //element
    QImage background("/home/emugators/Documents/ROMS/background.jpg");
    QImage scaleBack = background.scaled(500,750,Qt::KeepAspectRatio);
    ui->background->setPixmap(QPixmap::fromImage(scaleBack));

    //Loads the bookshelf image, scales it, and connects to ui element
    QImage games("/home/emugators/Documents/ROMS/lowresbookshelfedit.png");
    QImage scaleGame = games.scaled(400,125,Qt::KeepAspectRatio);
    ui->games->setPixmap(QPixmap::fromImage(scaleGame));

    //Loads the Famicom image, scale sit, and connects to ui element
    QImage famicom("/home/emugators/Documents/ROMS/Nintendo-Famicom-Disk-System.png");
    QImage scaleFam = famicom.scaled(360,300,Qt::KeepAspectRatio);
    ui->famicom->setPixmap(QPixmap::fromImage(scaleFam));

    //Loads the shelf image, scales it, and connects to ui element
    QImage shelf("/home/emugators/Documents/ROMS/shelfedit.jpg");
    QImage scaleShelf = shelf.scaled(450,65,Qt::KeepAspectRatio);
    ui->shelf->setPixmap(QPixmap::fromImage(scaleShelf));
    ui->shelf->lower();
    ui->background->lower();

    //Loads the left arrow image, scales it, and connects it to ui element
    QImage left("/home/emugators/Documents/ROMS/leftArrow.png");
    QIcon leftButton(QPixmap::fromImage(left));
    ui->previousButton->setIcon(leftButton);

    //Loads the right arrow image, scales it, and connects it to ui element
    QImage right("/home/emugators/Documents/ROMS/rightArrow.png");
    QIcon rightButton(QPixmap::fromImage(right));
    ui->nextButton->setIcon(rightButton);
}

/*
 * displayCurRom displays the rom which is currently being hovered/viewed.
 * It raises the buttons as well as the ui element which contains the
 * current rom image.
 * 
 */ 
void MainWindow::displayCurROM()
{
    //Raise the button ui elements so they are visible
    ui->nextButton->raise();
    ui->previousButton->raise();
  
    //Raise the rom image ui element to be visible and change the rom image
    //to match that of what is currently being viewed
    ui->label->raise();
    ui->label->setPixmap(QPixmap::fromImage(roms.at(curRom)));
}

/*
 * on_nextButton_clicked is called every time the next button is clicked
 * This function changes which rom is being displayed/able to be dragged
 * and dropped by iterating to the next rom in the vector. It also loops 
 * back to the beginning of the rom list if it is already at the last rom 
 * in the list
 * 
 */
void MainWindow::on_nextButton_clicked()
{
    //Iterates the current Rom index variable
    curRom+=1;
    //Checks to see if we were at the last rom in the list and if so then 
    //loops back to the first rom in the list
    if(curRom >= roms.size())
    {
        curRom = 0;
    }
    //Updates the rom that is being displayed to reflect the new current rom
    displayCurROM();
}

/*
 * on_previousButton_clicked is called every time the previous button is clicked.
 * This function changes which rom is being displayed/able to be dragged
 * and dropped by iterating to the previous rom in the vector. It also loops to
 * the back of the list if it is already at the first rom in in the list.
 * 
 */
void MainWindow::on_previousButton_clicked()
{
    //Iterates the current Rom index variable to the previous one in the list
    curRom -= 1;
    //Check to see if we are at the beginning of the list and loop back to the
    //end of the rom list
    if(curRom < 0)
    {
        curRom = roms.size()-1;
    }
    //Updates the rom that is being displayed to reflect the change in current rom
    displayCurROM();
      
}

/*
 * on_debugButton_clicked launches a seperate window to be used for debugging features
 * 
 */ 
void MainWindow::on_debugButton_clicked()
{
    //Opens the new window
    openNewWindow();
}

/*
 * mousePressEvent is called every time the mouse is pressed or released.
 * This is used for our drag and drop functionality to be able to load games.
 * @param
 * event- pointer to a mouse event which contains information such as whether
 * the mouse is being, pressed or released, and mouse location at time of the
 * event.
 * 
 */ 
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    //Gets the global position of the mouse at time of the event and pulls out
    //the x and y coordinates
    QPoint globalCursorPos = QCursor::pos();
    int x = globalCursorPos.x();
    int y = globalCursorPos.y();
    //TODO subtract rect->top.left()
    //Check if the mouse event occurred in the area where the rom image is located
    if (ui->label->geometry().contains(event->pos())) {
	//If the mouse was pressed on the rom grab that rom and being a drag event
        draggedRom = curRom;
        
        QDrag *drag = new QDrag(this);

        QMimeData *mimeData = new QMimeData;

        mimeData->setText("Success!");
        drag->setMimeData(mimeData);
	//Set rom image to be dragged/follow the mouse cursor until next mouse event.
        drag->setPixmap(QPixmap::fromImage(roms.at(curRom)));
        //This blocks until the mouse button is released
        drag->exec();
	//Get the mouse position when the mouse button is released
        globalCursorPos = QCursor::pos();
        x = globalCursorPos.x();
        y = globalCursorPos.y();
	//Find the x and y location of the mouse within the window
	QPoint topLeft = this->pos();
	x = x - topLeft.x();
	y = y - topLeft.y();
        //Check if x and y of mouse is over the famicom image
        if(ui->famicom->geometry().contains(x,y))
        {
	    //Send rom path of game to be loaded based on what user drags and drops
            printf("Before send\n");
	    send(new_socket, romPaths.at(draggedRom).c_str(), strlen(romPaths.at(draggedRom).c_str()), 0);
	    //Play game drop sound as new game is dropped on console
	    QMediaPlayer* gamedrop = new QMediaPlayer();
	    gamedrop->setMedia(QUrl("file:///home/emugators/Documents/ROMS/emugator/gamedrop.mp3"));
	    gamedrop->setVolume(50);
	    gamedrop->play();
	    //Debugging print statement
	    printf("After send\n");
	    
	    //Bring the game image back to the front
	    ui->label->raise();
	    //Iterate to next rom after game is dropped
	    //TODO:FIX THIS LOGIC(likely by using next and previous button functions)
	    draggedRom += 1;
	    if(draggedRom >= roms.size())
	    {
		    draggedRom = 0;
	    }
            if(draggedRom + 1 >= roms.size()){
                ui->label->setPixmap(QPixmap::fromImage(roms.at(0)));
            }else{
                ui->label->setPixmap(QPixmap::fromImage(roms.at(draggedRom+1)));
            }
        }
    }
}



