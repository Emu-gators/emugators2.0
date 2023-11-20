#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGuiApplication>
#include <QScreen>
#include <QTimer>
#include <QLabel>
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
    class NewWindow;
}

class NewWindow : public QMainWindow
{
    Q_OBJECT

    public:
        NewWindow(QWidget *parent = nullptr);
        ~NewWindow();
    private slots:
        void on_topLeft_clicked();
        void on_bottomRight_clicked();
        void resizeEvent(QResizeEvent *evt);
        void mousePressEvent(QMouseEvent *event);
        void explode();
        void close();
        
    protected:
        void spawnUFO();
        void timerEvent(QTimerEvent *evt);

    private:
        Ui::NewWindow *ui;
        int calibrationStage;
        QImage targetImg;
        QPixmap* ufoImg;
        QPixmap* explosionImg;
        int count;
        bool t1,t2,t3,t4,t5;
        QScreen* screen;
        double widthRatio;
        double heightRatio;
        QGraphicsScene* ufoScene;
        QGraphicsPixmapItem* ufo;
        float movement_x = 5;
        float movement_y = 4; 
        int timer1;
        QTimer* explosionTimer;
        bool isExploding = false;
        bool testing = false;
        int score = 0;
        QMediaPlaylist* playlist;
        QMediaPlayer* music;

};

#endif // NEWWINDOW_H
