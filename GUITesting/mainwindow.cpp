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
//#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define FIFO_FILE "MYFIFO"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    curRom = 0;
    draggedRom = 0;
    //OpenFCEUX();
    loadROMImages();
    loadROMPaths();
    //viewROMImages();
    displayCurROM();

    
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::OpenFCEUX(){
    
    QString program = "./fceux";
    QStringList arguments;
    QProcess::startDetached(program, arguments);
    
};
void MainWindow::loadROMPaths()
{
    std::string str0 = "../../../ROMS/emugator/ROMs/BalloonFight(Japan).nes";
    romPaths.push_back(str0);
    std::string str1 = "../../../ROMS/emugator/ROMs/B-Wings (Japan).nes";
    romPaths.push_back(str1);
    std::string str2 = "../../../ROMS/emugator/ROMs/Crisis Force (Japan).nes";
    romPaths.push_back(str2);
    std::string str3 = "../../../ROMS/emugator/ROMs/Dig Dug (Japan).nes";
    romPaths.push_back(str3);
    std::string str4 = "../../../ROMS/emugator/ROMs/Dr. Mario (Japan, USA).nes";
    romPaths.push_back(str4);
    std::string str5 = "../../../ROMS/emugator/ROMs/Final Fantasy III (Japan).nes";
    romPaths.push_back(str5);
    std::string str6 = "../../../ROMS/emugator/ROMs/Gradius (Japan).nes";
    romPaths.push_back(str6);
    std::string str7 = "../../../ROMS/emugator/ROMs/Gradius II (Japan).nes";
    romPaths.push_back(str7);
    std::string str8 = "../../../ROMS/emugator/ROMs/Ice Climber (Japan).nes";
    romPaths.push_back(str8);
    std::string str9 = "../../../ROMS/emugator/ROMs/LegendOfZelda2_JP.nes";
    romPaths.push_back(str9);
    std::string str10 = "../../../ROMS/emugator/ROMs/Pac-Man (Japan).nes";
    romPaths.push_back(str10);
    std::string str11 = "../../../ROMS/emugator/ROMs/Super Mario Bros. 3 (Japan).nes";
    romPaths.push_back(str11);
    std::string str12 = "../../../ROMS/emugator/ROMs/superMarioBros.nes";
    romPaths.push_back(str12);

}

void MainWindow::loadROMImages()
{
    QImage img0("../../../ROMS/emugator/ROM_Carts/BalloonFight(Japan).jpg");
    QImage scale0 = img0.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale0);
    QImage img1("../../../ROMS/emugator/ROM_Carts/B-Wings(Japan).jpg");
    QImage scale1 = img1.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale1);
    QImage img2("../../../ROMS/emugator/ROM_Carts/CrisisForce(Japan).jpg");
    QImage scale2 = img2.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale2);
    QImage img3("../../../ROMS/emugator/ROM_Carts/DigDug(Japan).jpg");
    QImage scale3 = img3.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale3);
    QImage img4("../../../ROMS/emugator/ROM_Carts/DrMario(Japan,USA).jpg");
    QImage scale4 = img4.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale4);
    QImage img5("../../../ROMS/emugator/ROM_Carts/Final Fantasy III (Japan).jpg");
    QImage scale5 = img5.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale5);
    QImage img6("../../../ROMS/emugator/ROM_Carts/Gradius (Japan).jpg");
    QImage scale6 = img6.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale6);
    QImage img7("../../../ROMS/emugator/ROM_Carts/Gradius II (Japan).jpg");
    QImage scale7 = img7.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale7);
    QImage img8("../../../ROMS/emugator/ROM_Carts/Ice Climber (Japan).jpg");
    QImage scale8 = img8.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale8);
    QImage img9("../../../ROMS/emugator/ROM_Carts/LegendOfZelda2_JP.jpg");
    QImage scale9 = img9.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale9);
    QImage img10("../../../ROMS/emugator/ROM_Carts/Pac-Man (Japan).jpg");
    QImage scale10 = img10.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale10);
    QImage img11("../../../ROMS/emugator/ROM_Carts/Super Mario Bros. 3 (Japan).jpg");
    QImage scale11 = img11.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale11);
    QImage img12("../../../ROMS/emugator/ROM_Carts/superMarioBros.jpg");
    QImage scale12 = img12.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale12);

    QImage background("../../../ROMS/background.jpg");
    QImage scaleBack = background.scaled(500,750,Qt::KeepAspectRatio);
    ui->background->setPixmap(QPixmap::fromImage(scaleBack));

    QImage games("../../../ROMS/lowresbookshelfedit.png");
    QImage scaleGame = games.scaled(400,125,Qt::KeepAspectRatio);
    ui->games->setPixmap(QPixmap::fromImage(scaleGame));

    QImage famicom("../../../ROMS/Nintendo-Famicom-Disk-System.png");
    QImage scaleFam = famicom.scaled(360,300,Qt::KeepAspectRatio);
    ui->famicom->setPixmap(QPixmap::fromImage(scaleFam));

    QImage shelf("../../../ROMS/shelfedit.jpg");
    QImage scaleShelf = shelf.scaled(450,65,Qt::KeepAspectRatio);
    ui->shelf->setPixmap(QPixmap::fromImage(scaleShelf));
    ui->shelf->lower();
    ui->background->lower();

    QImage left("../../../ROMS/leftArrow.png");
    QIcon leftButton(QPixmap::fromImage(left));
    ui->previousButton->setIcon(leftButton);
    //ui->previousButton->setIconSize(QPixmap::fromImage(left).rect().size());


    QImage right("../../../ROMS/rightArrow.png");
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

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    QPoint globalCursorPos = QCursor::pos();
    int x = globalCursorPos.x();
    int y = globalCursorPos.y();
    if (ui->label->geometry().contains(x,y)) {
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
        globalCursorPos = QCursor::pos();
        x = globalCursorPos.x();
        y = globalCursorPos.y();
        //Qt::DropAction dropAction = drag->exec();
        if(ui->famicom->geometry().contains(x,y))
        {
            fd = open(FIFO_FILE, O_CREAT|O_WRONLY);
            qDebug() << "FD: " << fd << " number!";
            //qDebug() << "ROM Path: " << romPaths.at(curRom).data();
            for (int x = 0; x < romPaths.at(curRom).length(); x++) {
                readbuf[x] = romPaths.at(curRom).data()[x];
                //qDebug()<<"Length of readBuf readbuf"<<romPaths.at(curRom).data()[x];
            }
            //qDebug()<<"Length of readBuf readbuf"<<romPaths.at(curRom).data()[x];
            stringLen = strlen(readbuf);
            qDebug()<<"Length of readBuf readbuf"<<stringLen;
            readbuf[stringLen] = '\0';
            qDebug()<<"Before writing readbuf"<<readbuf;

            write(fd, readbuf, strlen(readbuf));
            qDebug()<<"Before writing endstr and after writing readBuf";
            ::close(fd);

            //ui->label->raise();
            //ui->label->setPixmap(QPixmap::fromImage(roms.at(draggedRom+1)));
        }
        /*qDebug( "After Drop Action" );
        qDebug() << "X: " << x << "position!";
        qDebug() << "Y: " << y << "position!";
        qDebug() <<"Contained in Famicom "<<ui->famicom->geometry().contains(x,y)<< "!";*/
    }
}



