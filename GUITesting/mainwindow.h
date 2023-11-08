#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "newwindow.h"
#include <lgpio.h>
#include <QMediaPlayer>

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

private slots:
    void on_nextButton_clicked();
    void on_previousButton_clicked();
    void on_debugButton_clicked();
    void on_helpButton_clicked();
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    NewWindow *myNewWindow;
    void loadGUIImages();
    void loadROMImages();
    void loadROMPaths();
    void OpenFCEUX();
    void displayCurROM();
    void changeRomPath();
    void connectWithFCEUX();

    QImage processImage(QImage unprocessedImage);
    QString nameFromNES(QString);
    std::string convertExtension(std::string romImageDir, std::string path, std::string extension);
    std::vector<QImage> roms;
    int curRom;
    int draggedRom;
    std::vector<std::string> romPaths;
    std::vector<std::string> musicPaths;
    //Socket
    int server_fd;
    int client_fd;
    std::vector<QString> romNames;

    QMediaPlayer* gamedrop;
    QMediaPlayer* music;
    QMediaPlaylist* playlist;

    bool showHelp;
};

void setupGPIO();
void ejectButton(int e, lgGpioAlert_p evt, void *data);

#endif // MAINWINDOW_H
