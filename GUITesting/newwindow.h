#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>

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
        void mousePressEvent(QMouseEvent *event);

    private:
        Ui::NewWindow *ui;
        int calibrationStage;
        QImage targetImg;
        int count;
        bool t1,t2,t3,t4,t5;
};

#endif // NEWWINDOW_H
