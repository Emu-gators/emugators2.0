// NewWindow functionality uses code from:
// https://stackoverflow.com/questions/5027406/how-to-move-to-another-window-in-qt-by-a-pushbutton

#include "newwindow.h"
#include "./ui_newwindow.h"
#include <QMouseEvent>
#include <QtWidgets>
#include "mainwindow.h"


extern MainWindow* mwPointer;
NewWindow::NewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewWindow)
{
    printf("Initialize Window \n");
    ui->setupUi(this);
    ui->graphicsView->setStyleSheet("background: transparent");

    screen = QGuiApplication::primaryScreen();
    widthRatio = screen->availableSize().width() / 720.0;
    heightRatio = screen->availableSize().height() / 480.0;


    QPixmap bg("./GUI_ASSETS/space.png");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bg);
    this->setPalette(palette);
    
    ui->topLeft->setIcon(QIcon("./GUI_ASSETS/Target.png"));
    ui->topLeft->setIconSize(QSize(100 * widthRatio,100 * heightRatio));
    ui->topLeft->resize(ui->topLeft->iconSize());
    ui->topLeft->setMinimumWidth(100 * widthRatio);
    ui->topLeft->setMinimumHeight(100 * heightRatio);
    ui->topLeft->setFlat(true);
    ui->topLeft->setStyleSheet("QPushButton { background-color: transparent }");
    ui->topLeft->move((float)(0.29444 * (float)screen->availableSize().width() - (ui->topLeft->iconSize().width() / 2)), (float)(0.26041 * (float)screen->availableSize().height() - (ui->topLeft->iconSize().height() / 2)));

    ui->bottomRight->setIcon(QIcon("./GUI_ASSETS/Target.png"));
    ui->bottomRight->setIconSize(QSize(100 * widthRatio,100 * heightRatio));
    ui->bottomRight->resize(ui->bottomRight->iconSize());
    ui->bottomRight->setMinimumWidth(100 * widthRatio);
    ui->bottomRight->setMinimumHeight(100 * heightRatio);
    ui->bottomRight->setFlat(true);
    ui->bottomRight->setStyleSheet("QPushButton { background-color: transparent }");
    ui->bottomRight->move((float)(0.7055555 * (float)screen->availableSize().width() - (ui->bottomRight->iconSize().width() / 2 )), (float)(0.7416666 * (float)screen->availableSize().height() - (ui->bottomRight->iconSize().height() / 2)));

    mwPointer->playMusic = false;
    mwPointer->music->pause();

    playlist = new QMediaPlaylist();
    music = new QMediaPlayer();
    playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    music->setPlaylist(playlist);
    music->setVolume(25);
    playlist->addMedia(QUrl::fromLocalFile(QDir::currentPath() + "/GUI_ASSETS/alien.mp3"));
    music->play();

    //create button to close the window
    QPushButton *closeButton = new QPushButton("Close", this);
    //put it in the top right corner of the screen
    closeButton->move(0.9 * screen->availableSize().width(), 0.05 * screen->availableSize().height());
    closeButton->setMinimumWidth(35 * widthRatio);
    closeButton->setMinimumHeight(35 * heightRatio);
    closeButton->setStyleSheet("QPushButton { background-color: transparent }");
    closeButton->setFlat(true);
    closeButton->setIcon(QIcon("./GUI_ASSETS/close.png"));
    closeButton->setIconSize(QSize(35 * widthRatio,35 * heightRatio));
    closeButton->raise();
    //connect the button to the close function
    connect(closeButton, SIGNAL (released()), this, SLOT (close()));
    QApplication::setOverrideCursor(QCursor(Qt::CrossCursor));




}

NewWindow::~NewWindow()
{
    delete ui;
    delete ufoImg;
    delete explosionImg;
    delete ufoScene;
    delete ufo;
    delete explosionTimer;
    delete playlist;
    delete music;
}

void NewWindow::on_topLeft_clicked()
{
    t1 = true;
    ui->topLeft->setVisible(false);
    if( t1 && t2) {
        spawnUFO();
    }
}

void NewWindow::on_bottomRight_clicked()
{
    t2 = true;
    ui->bottomRight->setVisible(false);
    if( t1 && t2) {
        spawnUFO();
    }
}


void NewWindow::spawnUFO(){

    int id = QFontDatabase::addApplicationFont( QString::fromStdString(mwPointer->GUITestingPath) + "/GUI_ASSETS/ARCADECLASSIC.TTF");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont monospace(family);
    monospace.setPointSize(15 * heightRatio);
    ui->scoreLabel->setFont(monospace);
    ui->scoreLabel->setStyleSheet("QLabel { color : orange; }");
    ui->scoreLabel->setText("SCORE: 0");
    ui->scoreLabel->setMinimumWidth(ui->scoreLabel->sizeHint().width());
    ui->scoreLabel->setAlignment(Qt::AlignHCenter);


    ui->graphicsView->setGeometry(0,0,screen->availableSize().width(),screen->availableSize().height());
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ufoScene = new QGraphicsScene(this);


    ufoScene -> setSceneRect(0, 0, screen->availableSize().width(), screen->availableSize().height());
    ui->graphicsView->setScene(ufoScene);
    //create pixmap with ufo.png
    ufoImg = new QPixmap(QString::fromStdString(mwPointer->GUITestingPath) + "/GUI_ASSETS/ufo.png");
    explosionImg = new QPixmap(QString::fromStdString(mwPointer->GUITestingPath) + "/GUI_ASSETS/explode.png");
    *ufoImg = ufoImg->scaled(100 * widthRatio, 100 * heightRatio, Qt::KeepAspectRatio);
    *explosionImg = explosionImg->scaled(100 * widthRatio, 100 * heightRatio, Qt::KeepAspectRatio);

    ufo = ufoScene->addPixmap(*ufoImg);
    ufo->setPos(100 + ufoImg->width(),100 + ufoImg->height());
    timer1 = startTimer(50);
    explosionTimer = new QTimer(this);
    explosionTimer->setSingleShot(true);
    explosionTimer->setInterval(380);
    connect(explosionTimer, SIGNAL(timeout()), this, SLOT(explode()));
    testing = true;

}

void NewWindow::timerEvent(QTimerEvent *event){
    // check for radius
    if((ufo->pos().x() >= ufoScene->sceneRect().right() || ufo->pos().x() + ufoImg->width() >= ufoScene->sceneRect().right())  || (ufo->pos().x()  <= ufoScene->sceneRect().left() || ufo->pos().x() + ufoImg->width() <= ufoScene->sceneRect().left()) ){ 
        movement_x = -movement_x;
     }
    if((ufo->pos().y() >= ufoScene->sceneRect().bottom() || ufo->pos().y() + ufoImg->height() >= ufoScene->sceneRect().bottom())  || (ufo->pos().y() <= ufoScene->sceneRect().top() || ufo->pos().y() + ufoImg->height() <= ufoScene->sceneRect().top())){
        movement_y = -movement_y;
     }
    if(isExploding){
        return;
    }
    ufo->moveBy(movement_x, movement_y);
}

void NewWindow::resizeEvent(QResizeEvent *evt)
{
    
    QPixmap bg(QString::fromStdString(mwPointer->GUITestingPath) + "/GUI_ASSETS/space.png");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bg);
    this->setPalette(palette);

    QMainWindow::resizeEvent(evt); //call base implementation
}

void NewWindow::mousePressEvent(QMouseEvent *event){
    if(testing){
        if(event->button() == Qt::LeftButton){
            if(ufo->isUnderMouse()){
                score += 10;
                ui->scoreLabel->setText("SCORE: " + QString::number(score));
                ui->scoreLabel->setMinimumWidth(ui->scoreLabel->sizeHint().width());
                ui->scoreLabel->setAlignment(Qt::AlignHCenter);
                ufo->setPixmap(*explosionImg);
                isExploding = true;
                explosionTimer->start();
            }
        }
    }
}

void NewWindow::explode(){
    ufo->setPixmap(*ufoImg);
    isExploding = false;
}

void NewWindow::close(){
    QApplication::restoreOverrideCursor();
    music->setMedia(nullptr);
    mwPointer->playMusic = true;
    mwPointer->music->play();
    QMainWindow::close();
}