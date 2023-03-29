#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_nextButton_clicked();
    void on_previousButton_clicked();
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    void viewROMImages();
    void loadROMImages();
    void displayCurROM();
    std::vector<QImage> roms;
    int curRom;

};
#endif // MAINWINDOW_H