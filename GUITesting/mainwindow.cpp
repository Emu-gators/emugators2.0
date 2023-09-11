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

//#define FIFO_FILE "MYFIFO"
char* hello = "Hello from server";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

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
    
    loadROMImages();
    loadROMPaths();
    //viewROMImages();
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

    // closing the connected socket
    // close(new_socket);
    // closing the listening socket
    //shutdown(server_fd, SHUT_RDWR);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openNewWindow()
{
    mMyNewWindow = new NewWindow();

    mMyNewWindow->show();

}

void MainWindow::OpenFCEUX(){
    printf("Opening FCEUX\n");
    std::string command = "gtk-launch fceux\n";
    char* c = const_cast<char*>(command.c_str());
    system(c);
};
void MainWindow::loadROMPaths()
{
    std::string str0 = "/home/emugators/Documents/ROMS/emugator/ROMs/BalloonFightJapan.nes";
    romPaths.push_back(str0);
    std::string str1 = "/home/emugators/Documents/ROMS/emugator/ROMs/B-WingsJapan.nes";
    romPaths.push_back(str1);
    std::string str2 = "/home/emugators/Documents/ROMS/emugator/ROMs/CrisisForceJapan.nes";
    romPaths.push_back(str2);
    std::string str3 = "/home/emugators/Documents/ROMS/emugator/ROMs/DigDugJapan.nes";
    romPaths.push_back(str3);
    std::string str4 = "/home/emugators/Documents/ROMS/emugator/ROMs/Dr.MarioJapan,USA.nes";
    romPaths.push_back(str4);
    std::string str5 = "/home/emugators/Documents/ROMS/emugator/ROMs/FinalFantasyIIIJapan.nes";
    romPaths.push_back(str5);
    std::string str6 = "/home/emugators/Documents/ROMS/emugator/ROMs/GradiusJapan.nes";
    romPaths.push_back(str6);
    std::string str7 = "/home/emugators/Documents/ROMS/emugator/ROMs/GradiusIIJapan.nes";
    romPaths.push_back(str7);
    std::string str8 = "/home/emugators/Documents/ROMS/emugator/ROMs/IceClimberJapan.nes";
    romPaths.push_back(str8);
    std::string str9 = "/home/emugators/Documents/ROMS/emugator/ROMs/LegendOfZelda2_JP.nes";
    romPaths.push_back(str9);
    std::string str10 = "/home/emugators/Documents/ROMS/emugator/ROMs/Pac-ManJapan.nes";
    romPaths.push_back(str10);
    std::string str11 = "/home/emugators/Documents/ROMS/emugator/ROMs/SuperMarioBros.3Japan.nes";
    romPaths.push_back(str11);
    std::string str12 = "/home/emugators/Documents/ROMS/emugator/ROMs/superMarioBros.nes";
    romPaths.push_back(str12);

}

void MainWindow::loadROMImages()
{
    QImage img0("/home/emugators/Documents/ROMS/emugator/ROM_Carts/BalloonFight(Japan).jpg");
    QImage scale0 = img0.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale0);
    QImage img1("/home/emugators/Documents/ROMS/emugator/ROM_Carts/B-Wings(Japan).jpg");
    QImage scale1 = img1.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale1);
    QImage img2("/home/emugators/Documents/ROMS/emugator/ROM_Carts/CrisisForce(Japan).jpg");
    QImage scale2 = img2.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale2);
    QImage img3("/home/emugators/Documents/ROMS/emugator/ROM_Carts/DigDug(Japan).jpg");
    QImage scale3 = img3.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale3);
    QImage img4("/home/emugators/Documents/ROMS/emugator/ROM_Carts/DrMario(Japan,USA).jpg");
    QImage scale4 = img4.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale4);
    QImage img5("/home/emugators/Documents/ROMS/emugator/ROM_Carts/Final Fantasy III (Japan).jpg");
    QImage scale5 = img5.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale5);
    QImage img6("/home/emugators/Documents/ROMS/emugator/ROM_Carts/Gradius (Japan).jpg");
    QImage scale6 = img6.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale6);
    QImage img7("/home/emugators/Documents/ROMS/emugator/ROM_Carts/Gradius II (Japan).jpg");
    QImage scale7 = img7.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale7);
    QImage img8("/home/emugators/Documents/ROMS/emugator/ROM_Carts/Ice Climber (Japan).jpg");
    QImage scale8 = img8.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale8);
    QImage img9("/home/emugators/Documents/ROMS/emugator/ROM_Carts/LegendOfZelda2_JP.jpg");
    QImage scale9 = img9.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale9);
    QImage img10("/home/emugators/Documents/ROMS/emugator/ROM_Carts/Pac-Man (Japan).jpg");
    QImage scale10 = img10.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale10);
    QImage img11("/home/emugators/Documents/ROMS/emugator/ROM_Carts/Super Mario Bros. 3 (Japan).jpg");
    QImage scale11 = img11.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale11);
    QImage img12("/home/emugators/Documents/ROMS/emugator/ROM_Carts/superMarioBros.jpg");
    QImage scale12 = img12.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale12);

    QImage background("/home/emugators/Documents/ROMS/background.jpg");
    QImage scaleBack = background.scaled(500,750,Qt::KeepAspectRatio);
    ui->background->setPixmap(QPixmap::fromImage(scaleBack));

    QImage games("/home/emugators/Documents/ROMS/lowresbookshelfedit.png");
    QImage scaleGame = games.scaled(400,125,Qt::KeepAspectRatio);
    ui->games->setPixmap(QPixmap::fromImage(scaleGame));

    QImage famicom("/home/emugators/Documents/ROMS/Nintendo-Famicom-Disk-System.png");
    QImage scaleFam = famicom.scaled(360,300,Qt::KeepAspectRatio);
    ui->famicom->setPixmap(QPixmap::fromImage(scaleFam));

    QImage shelf("/home/emugators/Documents/ROMS/shelfedit.jpg");
    QImage scaleShelf = shelf.scaled(450,65,Qt::KeepAspectRatio);
    ui->shelf->setPixmap(QPixmap::fromImage(scaleShelf));
    ui->shelf->lower();
    ui->background->lower();

    QImage left("/home/emugators/Documents/ROMS/leftArrow.png");
    QIcon leftButton(QPixmap::fromImage(left));
    ui->previousButton->setIcon(leftButton);
    //ui->previousButton->setIconSize(QPixmap::fromImage(left).rect().size());


    QImage right("/home/emugators/Documents/ROMS/rightArrow.png");
    QIcon rightButton(QPixmap::fromImage(right));
    ui->nextButton->setIcon(rightButton);
}

void MainWindow::viewROMImages()
{

    //ui->label0->setPixmap(QPixmap::fromImage(roms.at(0)));
    //ui->label1->setPixmap(QPixmap::fromImage(roms.at(1)));
    //ui->label2->setPixmap(QPixmap::fromImage(roms.at(2)));
    //ui->label3->setPixmap(QPixmap::fromImage(roms.at(3)));
    //ui->label4->setPixmap(QPixmap::fromImage(roms.at(4)));
    //ui->label5->setPixmap(QPixmap::fromImage(roms.at(5)));
    //ui->label6->setPixmap(QPixmap::fromImage(roms.at(6)));
    //ui->label7->setPixmap(QPixmap::fromImage(roms.at(7)));
    //ui->label8->setPixmap(QPixmap::fromImage(roms.at(8)));
    //ui->label9->setPixmap(QPixmap::fromImage(roms.at(9)));
    //ui->label10->setPixmap(QPixmap::fromImage(roms.at(10)));
    //ui->label11->setPixmap(QPixmap::fromImage(roms.at(11)));
    //ui->label12->setPixmap(QPixmap::fromImage(roms.at(12)));

}

void MainWindow::displayCurROM()
{
    ui->nextButton->raise();
    ui->previousButton->raise();
  
    ui->label->raise();
    ui->label->setPixmap(QPixmap::fromImage(roms.at(curRom)));
}

void MainWindow::on_nextButton_clicked()
{
    curRom+=1;
    if(curRom >= roms.size())
    {
        curRom = 0;
    }
    displayCurROM();
}
void MainWindow::on_previousButton_clicked()
{
    curRom -= 1;
    if(curRom < 0)
    {
        curRom = roms.size()-1;
    }
    displayCurROM();
      
}

void MainWindow::on_debugButton_clicked()
{
    openNewWindow();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    QPoint globalCursorPos = QCursor::pos();
    int x = globalCursorPos.x();
    int y = globalCursorPos.y();
    //TODO subtract rect->top.left()
    if (ui->label->geometry().contains(event->pos())) {
        draggedRom = curRom;
        /*qDebug( "Mouse Press event" );
        qDebug() << "X: " << x << "position!";
        qDebug() << "Y: " << y << "position!";
        qDebug() << "X: " << event->globalPosition().x() << "position!";
        qDebug() << "Y: " << event->globalPosition().y() << "position!";*/
        QDrag *drag = new QDrag(this);

        QMimeData *mimeData = new QMimeData;

        mimeData->setText("Success!");
        drag->setMimeData(mimeData);

        drag->setPixmap(QPixmap::fromImage(roms.at(curRom)));
        
        drag->exec();
        //OpenFCEUX();
        globalCursorPos = QCursor::pos();
        x = globalCursorPos.x();
        y = globalCursorPos.y();
	QPoint topLeft = this->pos();
	x = x - topLeft.x();
	y = y - topLeft.y();
        //Qt::DropAction dropAction = drag->exec();
        if(ui->famicom->geometry().contains(x,y))
        {
            //fd = open(FIFO_FILE, O_CREAT|O_WRONLY);
           // qDebug() << "FD: " << fd << " number!";
            //qDebug() << "ROM Path: " << romPaths.at(curRom).data();
            //for (int x = 0; x < romPaths.at(curRom).length(); x++) {
            //    readbuf[x] = romPaths.at(curRom).data()[x];
                //qDebug()<<"Length of readBuf readbuf"<<romPaths.at(curRom).data()[x];
            //}
            //qDebug()<<"Length of readBuf readbuf"<<romPaths.at(curRom).data()[x];
            //stringLen = strlen(readbuf);
           // qDebug()<<"Length of readBuf readbuf"<<stringLen;
            //readbuf[stringLen] = '\0';
           // qDebug()<<"Before writing readbuf"<<readbuf;

            //write(fd, readbuf, strlen(readbuf));
            //qDebug()<<"Before writing endstr and after writing readBuf";
            //::close(fd);
	    //Send rom path of game to be loaded based on what user drags and drops
        printf("Before send\n");
	    send(new_socket, romPaths.at(draggedRom).c_str(), strlen(romPaths.at(draggedRom).c_str()), 0);
        printf("After send\n");
	    /*std::string command = "gtk-launch fceux ";
	    command = command + romPaths.at(draggedRom)+ "\n";
	    char* c = const_cast<char*>(command.c_str());
	    system(c);*/
	    ui->label->raise();
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
        /*qDebug( "After Drop Action" );
        qDebug() << "X: " << x << "position!";
        qDebug() << "Y: " << y << "position!";
        qDebug() <<"Contained in Famicom "<<ui->famicom->geometry().contains(x,y)<< "!";*/
    }
}



