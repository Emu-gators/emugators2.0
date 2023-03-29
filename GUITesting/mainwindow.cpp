#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QLabel>
#include <QDrag>
#include <QMouseEvent>
#include <QMimeData>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    curRom = 0;
    loadROMImages();
    //viewROMImages();
    displayCurROM();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadROMImages()
{
    QImage img0("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/BalloonFight(Japan).jpg");
    QImage scale0 = img0.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale0);
    QImage img1("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/B-Wings(Japan).jpg");
    QImage scale1 = img1.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale1);
    QImage img2("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/CrisisForce(Japan).jpg");
    QImage scale2 = img2.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale2);
    QImage img3("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/DigDug(Japan).jpg");
    QImage scale3 = img3.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale3);
    QImage img4("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/DrMario(Japan,USA).jpg");
    QImage scale4 = img4.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale4);
    QImage img5("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/Final Fantasy III (Japan).jpg");
    QImage scale5 = img5.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale5);
    QImage img6("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/Gradius (Japan).jpg");
    QImage scale6 = img6.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale6);
    QImage img7("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/Gradius II (Japan).jpg");
    QImage scale7 = img7.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale7);
    QImage img8("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/Ice Climber (Japan).jpg");
    QImage scale8 = img8.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale8);
    QImage img9("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/LegendOfZelda2_JP.jpg");
    QImage scale9 = img9.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale9);
    QImage img10("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/Pac-Man (Japan).jpg");
    QImage scale10 = img10.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale10);
    QImage img11("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/Super Mario Bros. 3 (Japan).jpg");
    QImage scale11 = img11.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale11);
    QImage img12("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/emugator/ROM_Carts/superMarioBros.jpg");
    QImage scale12 = img12.scaled(100,100,Qt::KeepAspectRatio);
    roms.push_back(scale12);

    QImage background("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/background.jpg");
    QImage scaleBack = background.scaled(500,750,Qt::KeepAspectRatio);
    ui->background->setPixmap(QPixmap::fromImage(scaleBack));

    QImage games("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/lowresbookshelfedit.png");
    QImage scaleGame = games.scaled(400,125,Qt::KeepAspectRatio);
    ui->games->setPixmap(QPixmap::fromImage(scaleGame));

    QImage famicom("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/Nintendo-Famicom-Disk-System.png");
    QImage scaleFam = famicom.scaled(360,300,Qt::KeepAspectRatio);
    ui->famicom->setPixmap(QPixmap::fromImage(scaleFam));

    QImage shelf("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/shelfedit.jpg");
    QImage scaleShelf = shelf.scaled(450,65,Qt::KeepAspectRatio);
    ui->shelf->setPixmap(QPixmap::fromImage(scaleShelf));
    ui->shelf->lower();
    ui->background->lower();

    QImage left("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/leftArrow.png");
    QIcon leftButton(QPixmap::fromImage(left));
    ui->previousButton->setIcon(leftButton);
    ui->previousButton->setIconSize(QPixmap::fromImage(left).rect().size());


    QImage right("C:/Users/cjwal/Documents/Spring-23/CEN3907/ROMS/rightArrow.png");
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
    if (ui->label->geometry().contains(event->globalPosition().x(),event->globalPosition().y())) {

        QDrag *drag = new QDrag(this);

        QMimeData *mimeData = new QMimeData;

        mimeData->setText("Success!");
        drag->setMimeData(mimeData);

        drag->setPixmap(QPixmap::fromImage(roms.at(curRom)));
        //drag->exec();
        Qt::DropAction dropAction = drag->exec();

    }
}

