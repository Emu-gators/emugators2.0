#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "newwindow.h"
#include <lgpio.h>
#include <QMediaPlayer>
#include <QLabel>
#include <QMimeType>
#include <QGuiApplication>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void openNewWindow();
    void sendCloseROM();
    bool playMusic;
    QMediaPlayer* music;
    QMediaPlaylist* playlist;
    int curRom;
    void handleEjectMusic();
    void displayCurROM();
    void setEjectFlag();

private slots:
    void pollEjectFlag();
    void on_nextButton_clicked();
    void on_previousButton_clicked();
    void on_debugButton_clicked();
    void on_helpButton_clicked();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    void resizeEvent(QResizeEvent *evt);

private:
    Ui::MainWindow *ui;
    NewWindow *myNewWindow;
    void loadGUIImages();
    void loadROMImages();
    void loadROMPaths();
    void OpenFCEUX();
    void changeRomPath();
    void connectWithFCEUX();

    QImage processImage(QImage unprocessedImage);
    QString nameFromNES(QString);
    std::string convertExtension(std::string romImageDir, std::string path, std::string extension);
    std::vector<QImage> roms;
    std::vector<std::string> romPaths;
    std::vector<std::string> musicPaths;
    //Socket
    int server_fd;
    int client_fd;
    std::vector<QString> romNames;

    QMediaPlayer* gamedrop;

    QLabel* helpScreen;

    QPoint dragStartPosition;
    QMimeType mimeType;

    bool showHelp;
    QScreen* screen;
    double widthRatio;
    double heightRatio;

    QTimer* pollEjectTimer;

    bool ejectFlag;
};

void setupGPIO();
void ejectButton(int e, lgGpioAlert_p evt, void *data);

#endif // MAINWINDOW_H
