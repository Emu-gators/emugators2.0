// NewWindow functionality uses code from:
// https://stackoverflow.com/questions/5027406/how-to-move-to-another-window-in-qt-by-a-pushbutton

#include "newwindow.h"
#include "./ui_newwindow.h"
#include <QMouseEvent>

NewWindow::NewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewWindow)
{
    printf("Initialize Window \n");
    ui->setupUi(this);
    calibrationStage = 1;
    //Load background grid image for calibration screen
    QImage grid("/home/emugators/Documents/ROMS/grid.png");
    QImage scaleGrid = grid.scaled(1920,1080);
    ui->background->setPixmap(QPixmap::fromImage(scaleGrid));
    
    QImage target("/home/emugators/Documents/ROMS/Target.png");
    QImage scaledTarget = target.scaled(100,100,Qt::KeepAspectRatio);
    targetImg = scaledTarget;
    ui->target1->setPixmap(QPixmap::fromImage(targetImg));
    ui->target2->setPixmap(QPixmap::fromImage(targetImg));
    ui->target3->setPixmap(QPixmap::fromImage(targetImg));
    ui->target4->setPixmap(QPixmap::fromImage(targetImg));
    ui->target5->setPixmap(QPixmap::fromImage(targetImg));
    ui->target1->raise();
    ui->target2->raise();
    ui->target3->lower();
    ui->target4->lower();
    ui->target5->lower();
    t1 = false;
    t2 = false;
    t3 = false;
    t4 = false;
    t5 = false;
    
    count = 0;
}

NewWindow::~NewWindow()
{
    delete ui;
}

void NewWindow::mousePressEvent(QMouseEvent *event)
{
    QPoint globalCursorPos = QCursor::pos();
    int x = globalCursorPos.x();
    int y = globalCursorPos.y();
    if(calibrationStage == 0)
    {
        printf("Begin Calibration\n");
        calibrationStage = 1;
        ui->target1->raise();
    }
    else if(calibrationStage == 1)
    {
        printf("Shot first Target\n");
        ui->target1->lower();
        ui->target2->raise();
        calibrationStage = 2;
    }else if(calibrationStage == 2)
    {
        printf("Shot second Target\n");
        calibrationStage = 3;
        ui->target2->lower();
    }else if(calibrationStage ==3)
    {
        calibrationStage = -1;
        ui->target1->raise();
        ui->target2->raise();
        ui->target3->raise();
        ui->target4->raise();
        ui->target5->raise();
    }
    else
    {
         if(t1 == true &&t2 == true &&t3 == true &&t4 == true &&t5 == true)
         {
            this->close();
            printf("Done calibrating and Testing calibration\n");
         }else
         {
            if (ui->target1->geometry().contains(event->pos())) 
            {
                ui->target1->lower();
                t1 = true;
            }
            if (ui->target2->geometry().contains(event->pos())) 
            {
                ui->target2->lower();
                t2 = true;
            }
            if (ui->target3->geometry().contains(event->pos())) 
            {
                ui->target3->lower();
                t3 = true;
            }
            if (ui->target4->geometry().contains(event->pos())) 
            {
                ui->target4->lower();
                t4 = true;
            }
            if (ui->target5->geometry().contains(event->pos())) 
            {
                ui->target5->lower();
                t5 = true;
            }
          }
    }
    
    count++;
    printf("count:%d\n", count);
    
    
}
