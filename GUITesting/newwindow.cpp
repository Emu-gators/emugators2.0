// NewWindow functionality uses code from:
// https://stackoverflow.com/questions/5027406/how-to-move-to-another-window-in-qt-by-a-pushbutton

#include "newwindow.h"
#include "./ui_newwindow.h"

NewWindow::NewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewWindow)
{
    ui->setupUi(this);
}

NewWindow::~NewWindow()
{
    delete ui;
}