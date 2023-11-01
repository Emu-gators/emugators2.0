/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QPushButton *previousButton;
    QLabel *games;
    QLabel *famicom;
    QLabel *shelf;
    QLabel *background;
    QPushButton *debugButton;
    QPushButton *pushButton;
    QPushButton *nextButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 762);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 720));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(1280, 720));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(800, 600));
        previousButton = new QPushButton(widget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(210, 170, 80, 23));
        games = new QLabel(widget);
        games->setObjectName(QString::fromUtf8("games"));
        games->setGeometry(QRect(280, 80, 241, 61));
        famicom = new QLabel(widget);
        famicom->setObjectName(QString::fromUtf8("famicom"));
        famicom->setGeometry(QRect(190, 320, 400, 300));
        shelf = new QLabel(widget);
        shelf->setObjectName(QString::fromUtf8("shelf"));
        shelf->setGeometry(QRect(180, 90, 441, 121));
        background = new QLabel(widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 801, 701));
        debugButton = new QPushButton(widget);
        debugButton->setObjectName(QString::fromUtf8("debugButton"));
        debugButton->setGeometry(QRect(340, 20, 80, 23));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 20, 80, 23));
        nextButton = new QPushButton(widget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(500, 170, 80, 23));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 70, 111, 101));
        background->raise();
        previousButton->raise();
        games->raise();
        famicom->raise();
        shelf->raise();
        debugButton->raise();
        pushButton->raise();
        nextButton->raise();
        label->raise();

        horizontalLayout->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        previousButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        games->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        famicom->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        shelf->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        debugButton->setText(QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
