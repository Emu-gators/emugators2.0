//This Server file utilizes code from https://www.geeksforgeeks.org/socket-programming-cc/

// Server side C/C++ program to demonstrate Socket
// programming
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QLabel>
#include <QDrag>
#include <QMouseEvent>
#include <QEvent>
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

#include <QtCore>
#include <QtGui>
#include <QPushButton>
#include <QGridLayout>
#include <QCursor>



#include <QFileDialog>
#include <iostream>
#include <fstream>


#include <inttypes.h>

#include <QMediaPlaylist>





#include <errno.h>

#include <cstring>


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
    //Connect some ui elements and layout based on location.
    connect(ui->debugButton, SIGNAL(click()), this, SLOT(openNewWindow()));

    //gamedrop = new QMediaPlayer();
    playlist = new QMediaPlaylist();
    music = new QMediaPlayer();
    playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    music->setPlaylist(playlist);

    showHelp = true;
    music->setVolume(25);
    playMusic = true;

    //Load the GUI images, ROM images, and ROM paths from default specified directories
    screen = QGuiApplication::primaryScreen();
    widthRatio = screen->availableSize().width() / 720.0;
    heightRatio = screen->availableSize().height() / 480.0;

    loadROMPaths();
    loadGUIImages();
    displayCurROM();
    setupGPIO();
    initServerSocket();
    connectWithFCEUX();
    this->setAcceptDrops(true);

    ejectFlag = false;

    pollEjectTimer = new QTimer(this);
    pollEjectTimer->setInterval(17);
    connect(pollEjectTimer, SIGNAL(timeout()), this, SLOT(pollEjectFlag()));
    pollEjectTimer->start();

    playlistLoadedFlag = false;
    connect(playlist, SIGNAL(loaded()), this, SLOT(setPlaylistLoadedFlag()));
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
    myNewWindow->setWindowState(Qt::WindowFullScreen);
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
    std::string musicPath;

    if (configFile.is_open())
    {
        // if it does, read the file and load the roms from the paths specified in the file

        getline(configFile, romPath);
        getline(configFile, romImagePath);
        getline(configFile, musicPath);
        getline(configFile, GUITestingPath);

        configFile.close();

    } else {
        // if it doesn't, prompt the user to select a folder containing roms
        std::ofstream newConfigFile("config.txt");
        
        QString QromPath = QFileDialog::getExistingDirectory(this, tr("Select ROM Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        romPath = QromPath.toStdString();

        QString QromImagePath = QFileDialog::getExistingDirectory(this, tr("Select ROM Image Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        romImagePath = QromImagePath.toStdString();

        QString QmusicPath = QFileDialog::getExistingDirectory(this, tr("Select Music Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        musicPath = QmusicPath.toStdString();

        QString QGUITestingPath = QFileDialog::getExistingDirectory(this, tr("Select GUITesting Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        GUITestingPath = QGUITestingPath.toStdString();

        newConfigFile << romPath << "\n";
        newConfigFile << romImagePath << "\n";
        newConfigFile << musicPath << "\n";
        newConfigFile << GUITestingPath << "\n";

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

            std::string correspondingRomPath = convertExtension(romImagePath, path.toStdString(), ".jpg");

            std::string correspondingMusicPath = convertExtension(musicPath, path.toStdString(), ".mp3");

            romImages.push_back(correspondingRomPath);

            // add the music to the playlist, if the music file doesn't exist, add stock music instead
            if (QFile::exists(QString::fromStdString(correspondingMusicPath)))
            {
                playlist->addMedia(QUrl::fromLocalFile(QString::fromStdString(correspondingMusicPath)));
            } else {
                playlist->addMedia(QUrl::fromLocalFile(QDir::currentPath() + "/GUI_ASSETS/stockmusic.mp3"));
            }
            

            romNames.push_back(nameFromNES(path));
        }
    }

    // now that we have the paths of the roms and the rom images, we can load them into the program

    for (unsigned int i = 0; i < romImages.size(); i++)
    {
        //if the rom image file does not exist, use the stock image instead
        if (!QFile::exists(QString::fromStdString(romImages.at(i))))
        {
            romImages.at(i) = GUITestingPath + "/GUI_ASSETS/stockimage.png";
        }
        QImage unprocessedImage(QString::fromStdString(romImages.at(i)));
        //qDebug() << QString::fromStdString(romImages.at(i));
        QImage processedImage = processImage(unprocessedImage);
        roms.push_back(processedImage);
    }
}


std::string MainWindow::convertExtension(std::string romImageDir, std::string path, std::string extension)
{
    int nameIndex = path.find_last_of('/');
    //Get the substring of the path that just has the rom file name
    path = path.substr(nameIndex + 1);
    path = romImageDir + "/" +  path.substr(0, path.size()-4)+ extension;
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
    QImage scaled = unprocessedImage.scaled(100 * widthRatio,100 * heightRatio,Qt::KeepAspectRatio);
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
    QPixmap bg(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/background.jpg");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bg);
    this->setPalette(palette);

    //screen->availableSize();

    //Loads the Famicom image, scales it, and connects to ui element
    QImage famicom(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/Nintendo-Famicom-Disk-System.png");
    QImage scaleFam = famicom.scaled(180 * widthRatio, 150 * heightRatio, Qt::IgnoreAspectRatio);

    ui->famicom->setPixmap(QPixmap::fromImage(scaleFam));
 

    //Loads the Famicom image, scales it, and connects to ui element
    helpScreen = new QLabel(this);
    helpScreen->setGeometry(0, 0, 600 * widthRatio, 500 * heightRatio);
    helpScreen->move(this->centralWidget()->rect().center() - helpScreen->rect().center());

    helpScreen->show();
    QImage help(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/help.png");
    QImage scaleHelp = help.scaled(600 * widthRatio,500 * heightRatio,Qt::IgnoreAspectRatio);
    helpScreen->setPixmap(QPixmap::fromImage(scaleHelp));
    helpScreen->raise();

    int id = QFontDatabase::addApplicationFont(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/ARCADECLASSIC.TTF");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont monospace(family);
    monospace.setPointSize(15 * heightRatio);
    ui->gameTitle->setFont(monospace);
    ui->gameTitle->setStyleSheet("QLabel { color : orange; }");

    ui->nextButton->setIcon(QIcon(QString::fromStdString(GUITestingPath + "/GUI_ASSETS/rightArrow.png")));
    ui->nextButton->setIconSize(QSize(100 * widthRatio,100 * heightRatio));
    ui->nextButton->setMinimumWidth(100 * widthRatio);
    ui->nextButton->setMinimumHeight(100 * heightRatio);
    ui->nextButton->setFlat(true);
    ui->nextButton->setStyleSheet("QPushButton { background-color: transparent }");
    ui->previousButton->setIcon(QIcon(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/leftArrow.png"));
    ui->previousButton->setIconSize(QSize(100 * widthRatio,100 * heightRatio));
    ui->previousButton->setMinimumWidth(100 * widthRatio);
    ui->previousButton->setMinimumHeight(100 * heightRatio);

    ui->previousButton->setFlat(true);
    ui->previousButton->setStyleSheet("QPushButton { background-color: transparent }");

    ui->debugButton->setIcon(QIcon(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/calibrate.png"));
    ui->debugButton->setIconSize(QSize(35 * widthRatio,35 * heightRatio));
    ui->debugButton->setMinimumWidth(35 * widthRatio);
    ui->debugButton->setMinimumHeight(35 * heightRatio);
    ui->debugButton->setFlat(true);
    ui->debugButton->setStyleSheet("QPushButton { background-color: transparent }");

    ui->helpButton->setIcon(QIcon(QString::fromStdString(GUITestingPath) + "/GUI_ASSETS/info.png"));
    ui->helpButton->setIconSize(QSize(35 * widthRatio,35 * heightRatio));
    ui->helpButton->setMinimumWidth(35 * widthRatio);
    ui->helpButton->setMinimumHeight(35 * heightRatio);
    ui->helpButton->setFlat(true);
    ui->helpButton->setStyleSheet("QPushButton { background-color: transparent }");




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
        helpScreen->raise();
    }

    //play the roms music if not in a game
    if(playMusic){
        music->play();
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

    //updates the position in the playlist 
    playlist->setCurrentIndex(curRom);

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

    //updates the position in the playlist 
    playlist->setCurrentIndex(curRom);

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
        helpScreen->raise();
        helpScreen->show();
        music->setVolume(25);
    }else{
        helpScreen->hide();
        music->setVolume(50);
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
    if (event->button() == Qt::LeftButton)
        dragStartPosition = event->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    int adjust = (ui->romLeftSpacer1->geometry().size().width() + ui->romLeftSpacer2->geometry().size().width() + ui->romLeftSpacer3->geometry().size().width() + ui->previousButton->width());
    if (!(event->buttons() & Qt::LeftButton) || !(ui->romWidget->geometry().adjusted(adjust,0,-adjust,0).contains(event->pos())))
        return;
    if ((event->pos() - dragStartPosition).manhattanLength()
         < QApplication::startDragDistance())
        return;

    QDrag *drag = new QDrag(this);
    QMimeData *mimeData = new QMimeData;

    mimeData->setText("Success!");
    drag->setMimeData(mimeData);
    drag->setPixmap(QPixmap::fromImage(roms.at(curRom)));

    Qt::DropAction dropAction = drag->exec(Qt::CopyAction | Qt::MoveAction);
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
        event->acceptProposedAction();

}

void MainWindow::dropEvent(QDropEvent *event)
{
    QPoint mousePos = this->centralWidget()->mapFromGlobal(QCursor::pos());

    if(!ui->famicomWidget->geometry().adjusted(ui->famicomLeftSpacer->geometry().size().width(),0,-ui->famicomRightSpacer->geometry().size().width(),0).contains(mousePos)){
        return;
    }

    //Play game drop sound as new game is dropped on console
    //gamedrop->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/GUI_ASSETS/gamedrop.mp3"));
    //gamedrop->setVolume(50);
    playMusic = false;
    music->stop();
    music->setMedia(nullptr);
    
    //gamedrop->play();
    //Debugging print statement
    printf("After send\n");

    //Send rom path of game to be loaded based on what user drags and drops
    printf("Before send\n");
    
    int tries = 3;
    int val;
    do{
        val = send(client_fd, romPaths.at(curRom).c_str(), strlen(romPaths.at(curRom).c_str()), 0);

        if(val == -1){
            perror("Failed Send");
            ::close(client_fd);
            connectWithFCEUX();
            send(client_fd, romPaths.at(curRom).c_str(), strlen(romPaths.at(curRom).c_str()), 0);
        }

        tries--;
    }while(val == -1 && tries >= 0);
    
    //Bring the game image back to the front
    ui->label->raise();
    
    this->lower();

    event->acceptProposedAction();
}

void MainWindow::sendCloseROM(){
    send(client_fd, "close\0", strlen("close\0"), 0);
}

void MainWindow::setPlaylistLoadedFlag(){
    playlistLoadedFlag = true;
}

extern MainWindow* mwPointer;
void ejectButton(int e, lgGpioAlert_p evt, void *data){
    printf("Eject was pressed!\n");
    mwPointer->setEjectFlag();
}

void MainWindow::setEjectFlag(){
    ejectFlag = true;
}

void MainWindow::pollEjectFlag(){
    if(ejectFlag){
        ejectFlag = false;
        raise();
        activateWindow();
        sendCloseROM();
        //playlist->setCurrentIndex(curRom);
        music->setPlaylist(playlist);
        /*playlistLoadedFlag = false;
        playlist->setCurrentIndex(curRom);
        while(!playlistLoadedFlag);
        music->play();*/
        playMusic = true;

        on_nextButton_clicked();
        on_previousButton_clicked();
    }
}

void setupGPIO(){
    int handle;
    int buttonC4 = 20;

    handle = lgGpiochipOpen(2);
    lgGpioSetAlertsFunc(handle,buttonC4,ejectButton,0);
    lgGpioClaimAlert(handle,LG_SET_PULL_DOWN,LG_RISING_EDGE,buttonC4,-1);
}

void MainWindow::initServerSocket(){
    //Socket server code specified below was adapted from an example at
    //www.geeksforgeeks.org/socket-programming-cc/
    //Socket Server code sample
    int opt = 1;
    addrlen = sizeof(address);
    std::memset(buffer, 0, 1024);
    
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
}

void MainWindow::connectWithFCEUX(){
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

void MainWindow::resizeEvent(QResizeEvent *evt)
{
    
    QPixmap bg("./GUI_ASSETS/background.jpg");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bg);
    this->setPalette(palette);

    helpScreen->move(this->centralWidget()->rect().center() - helpScreen->rect().center());


    QMainWindow::resizeEvent(evt); //call base implementation
}