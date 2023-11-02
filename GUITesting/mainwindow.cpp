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



#include <QFileDialog>
#include <iostream>
#include <fstream>


#include <inttypes.h>


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
    //Connect some ui elements and layout based on location.
    connect(ui->debugButton, SIGNAL(click()), this, SLOT(openNewWindow()));
    //QGridLayout *gridLayout = new QGridLayout;
    // addWidget(*Widget, row, column, rowspan, colspan)
    //gridLayout->addWidget(ui->nextButton,0,10,0.25,0.25);
    //gridLayout->addWidget(ui->previousButton,0,0,0.25,0.25);
    //gridLayout->addWidget(ui->debugButton,0,2,1,1);
    //this->centralWidget()->setLayout(gridLayout);
    
    showHelp = true;

    //Load the GUI images, ROM images, and ROM paths from default specified directories
    loadGUIImages();
    loadROMPaths();
    displayCurROM();
    setupGPIO();
    connectWithFCEUX();
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
    myNewWindow = new NewWindow();
    myNewWindow->setWindowState(Qt::WindowMaximized);
    myNewWindow->show();

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
    int res = system(c);
    if(res != 0){
        std::cout << "Error, failure in launching FCEUX.\n";
    }
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

    // check if a file called roms.txt exists in the same directory as the executable
    // if it does, read the file and load the roms from the paths specified in the file
    // if it doesn't, prompt the user to select a folder containing roms
    // then, write the paths of the roms to a file called roms.txt
    // this way, the user only has to select a folder once, and the program will remember the folder
    // then it needs to check if roms were added or removed from the folder since the last time the program was run

    // check if a file called roms.txt exists in the same directory as the executable
    std::ifstream configFile("config.txt");

    std::string romPath;
    std::string romImagePath;

    if (configFile.is_open())
    {
        // if it does, read the file and load the roms from the paths specified in the file

        getline(configFile, romPath);
        getline(configFile, romImagePath);

        configFile.close();

    } else {
        // if it doesn't, prompt the user to select a folder containing roms
        std::ofstream newConfigFile("config.txt");
        
        QString QromPath = QFileDialog::getExistingDirectory(this, tr("Select ROM Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        romPath = QromPath.toStdString();

        QString QromImagePath = QFileDialog::getExistingDirectory(this, tr("Select ROM Image Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        romImagePath = QromImagePath.toStdString();

        newConfigFile << romPath << "\n";
        newConfigFile << romImagePath << "\n";

        newConfigFile.close();
    }

    //create romImages vector
    std::vector<std::string> romImages;

    QDirIterator it(QString::fromStdString(romPath), QDirIterator::Subdirectories);
        
    while(it.hasNext()){
        QString path = it.next();
        if (path.endsWith(".nes"))
        {
            romPaths.push_back(path.toStdString());

            std::string correspondingRomPath = convertExtension(romImagePath, path.toStdString());

            romImages.push_back(correspondingRomPath);

            romNames.push_back(nameFromNES(path));
        }
    }

    // now that we have the paths of the roms and the rom images, we can load them into the program

    for (unsigned int i = 0; i < romImages.size(); i++)
    {
        QImage unprocessedImage(QString::fromStdString(romImages.at(i)));
        //qDebug() << QString::fromStdString(romImages.at(i));
        QImage processedImage = processImage(unprocessedImage);
        roms.push_back(processedImage);
    }
}


std::string MainWindow::convertExtension(std::string romImageDir, std::string path)
{
    int nameIndex = path.find_last_of('/');
    //Get the substring of the path that just has the rom file name
    path = path.substr(nameIndex + 1);
    path = romImageDir + "/" +  path.substr(0, path.size()-4)+ ".jpg";
    //qDebug() << QString::fromStdString(path);
    //Return the path of the rom file image
    return path;
}

QString MainWindow::nameFromNES(QString path){
    qsizetype nameLength = path.size() - 1 - path.lastIndexOf('/');
    QString namePreFormat = path.right(nameLength);
    namePreFormat.chop(4);

    QRegularExpression re("((?<=[a-z])[A-Z]|[A-Z](?=[a-z]))");
    QRegularExpressionMatchIterator matchIt = re.globalMatch(namePreFormat);

    QStringList list;

    std::vector<int> indices;

    while(matchIt.hasNext()){

        QRegularExpressionMatch match = matchIt.next();

        indices.push_back(match.capturedStart());

    }

    for(unsigned int i = 0; i < indices.size(); i++){ //could do this to i < indices.size() - 1 to remove "Japan" etc
        int length;
        if(i == indices.size()){
            length = -1;
        }else{
            length = indices[i+1] - indices[i];
        }

        list.append(namePreFormat.mid(indices[i], length));
    }

    QString name = list.join(' ');

    return name.trimmed();
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
    QImage background("./GUI_ASSETS/background.jpg");
    QImage scaleBack = background.scaled(800,600,Qt::KeepAspectRatioByExpanding);
    ui->background->setPixmap(QPixmap::fromImage(scaleBack));

    //Loads the Famicom image, scales it, and connects to ui element
    QImage famicom("./GUI_ASSETS/Nintendo-Famicom-Disk-System.png");
    QImage scaleFam = famicom.scaled(180,150,Qt::KeepAspectRatioByExpanding);
    ui->famicom->setPixmap(QPixmap::fromImage(scaleFam));

    //Loads the Famicom image, scales it, and connects to ui element
    QImage help("./GUI_ASSETS/help.png");
    QImage scaleHelp = help.scaled(600,500,Qt::KeepAspectRatioByExpanding);
    ui->helpScreen->setPixmap(QPixmap::fromImage(scaleHelp));
    ui->helpScreen->raise();

    int id = QFontDatabase::addApplicationFont("./GUI_ASSETS/ARCADECLASSIC.TTF");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont monospace(family);
    monospace.setPointSize(16);
    ui->gameTitle->setFont(monospace);

    ui->gameTitle->setStyleSheet("QLabel { color : orange; }");

    ui->nextButton->setIcon(QIcon("./GUI_ASSETS/rightArrow.png"));
    ui->previousButton->setIcon(QIcon("./GUI_ASSETS/leftArrow.png"));

    /* Setting tooltips */
    ui->famicom->setToolTip("Drag and drop one of the cartridges above to start playing!");

    ui->debugButton->setToolTip("Launch Zapper calibration sequence");

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

    ui->label->setToolTip(romNames[curRom]);
    ui->gameTitle->setText(romNames[curRom]);
    ui->gameTitle->setMinimumWidth(ui->gameTitle->sizeHint().width());
    ui->gameTitle->setAlignment(Qt::AlignHCenter);

    if(showHelp){
        ui->helpScreen->raise();
    }
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
    if((unsigned int)curRom >= roms.size())
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

/* Toggles the help menu */
void MainWindow::on_helpButton_clicked(){
    showHelp = !showHelp;

    if(showHelp){
        ui->helpScreen->show();
    }else{
        ui->helpScreen->hide();
    }
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
    QPoint globalCursorPos = event->globalPos();
    int x = globalCursorPos.x();
    int y = globalCursorPos.y();

    QPoint topLeft = ui->widget->pos();
    x = x - topLeft.x();
    y = y - topLeft.y();

    //Check if the mouse event occurred in the area where the rom image is located
    if (ui->label->geometry().contains(x,y)) {
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
    topLeft = ui->widget->pos();
	x = x - topLeft.x();
	y = y - topLeft.y();
        //Check if x and y of mouse is over the famicom image
        
	if(ui->famicom->geometry().contains(x,y))
        {
	    //Send rom path of game to be loaded based on what user drags and drops
            printf("Before send\n");
	    send(client_fd, romPaths.at(draggedRom).c_str(), strlen(romPaths.at(draggedRom).c_str()), 0);
	    //Play game drop sound as new game is dropped on console
	    QMediaPlayer* gamedrop = new QMediaPlayer();
	    gamedrop->setMedia(QUrl("file://./GUI_ASSETS/gamedrop.mp3"));
	    gamedrop->setVolume(50);
	    gamedrop->play();
	    //Debugging print statement
	    printf("After send\n");
	    
	    //Bring the game image back to the front
	    ui->label->raise();
	    //Iterate to next rom after game is dropped
	    //TODO:FIX THIS LOGIC(likely by using next and previous button functions)
	    on_nextButton_clicked();
	    
	    this->lower();
        }
    }
}

void MainWindow::sendCloseROM(){
    send(client_fd, "close", strlen("close"), 0);
}

extern MainWindow* mwPointer;
void ejectButton(int e, lgGpioAlert_p evt, void *data){
    printf("Eject was pressed!\n");
    mwPointer->raise();
    mwPointer->activateWindow();
    mwPointer->sendCloseROM();
}

void setupGPIO(){
    int handle;
    int buttonC4 = 20;

    handle = lgGpiochipOpen(2);
    lgGpioSetAlertsFunc(handle,buttonC4,ejectButton,0);
    lgGpioClaimAlert(handle,LG_SET_PULL_DOWN,LG_RISING_EDGE,buttonC4,-1);
}

void MainWindow::connectWithFCEUX(){
    //Socket server code specified below was adapted from an example at
    //www.geeksforgeeks.org/socket-programming-cc/
    //Socket Server code sample
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
	if ((client_fd
		= accept(server_fd, (struct sockaddr*)&address,
				(socklen_t*)&addrlen))
		< 0) {
		perror("accept");
		exit(EXIT_FAILURE);
	}

    printf("Accepted on socket \n");
    int valread = read(client_fd, buffer, 1024);
    if(valread == 0){
        std::cout << "ERROR: Connection closed on other end.\n";
    }

    printf("%s\n", buffer);
    std::string std_hello = "hello";
    const char* hello = std_hello.c_str();
    send(client_fd, hello, strlen(hello), 0);
    printf("Hello message sent\n");
}
