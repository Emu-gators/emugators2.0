#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "newwindow.h"

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

private slots:
    void on_nextButton_clicked();
    void on_previousButton_clicked();
    void on_debugButton_clicked();
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    NewWindow *mMyNewWindow;
    void loadGUIImages();
    void loadROMImages();
    void loadROMPaths();
    void OpenFCEUX();
    void displayCurROM();
    void changeRomPath();
    QImage processImage(QImage unprocessedImage);
    std::string convertExtension(std::string romImageDir, std::string path);
    std::vector<QImage> roms;
    int curRom;
    int draggedRom;
    std::vector<std::string> romPaths;
    //Socket
    int server_fd;
    int new_socket;

};
#endif // MAINWINDOW_H
