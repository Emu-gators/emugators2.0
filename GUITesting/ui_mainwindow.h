/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *background;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QLabel *label;
    QLabel *games;
    QLabel *famicom;
    QLabel *shelf;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 750);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        background = new QLabel(centralWidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 500, 750));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(360, 240, 80, 21));
        previousButton = new QPushButton(centralWidget);
        previousButton->setObjectName("previousButton");
        previousButton->setGeometry(QRect(80, 240, 80, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 200, 100, 100));
        games = new QLabel(centralWidget);
        games->setObjectName("games");
        games->setGeometry(QRect(60, 168, 400, 125));
        famicom = new QLabel(centralWidget);
        famicom->setObjectName("famicom");
        famicom->setGeometry(QRect(75, 350, 360, 300));
        shelf = new QLabel(centralWidget);
        shelf->setObjectName("shelf");
        shelf->setGeometry(QRect(30, 260, 450, 65));
        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        previousButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        games->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        famicom->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        shelf->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
