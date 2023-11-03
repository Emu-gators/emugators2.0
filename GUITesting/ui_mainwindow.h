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
#include <QtWidgets/QGridLayout>
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
    QLabel *famicom;
    QLabel *background;
    QPushButton *debugButton;
    QPushButton *helpButton;
    QPushButton *nextButton;
    QLabel *helpScreen;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *gameTitle;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(720, 522);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(720, 480));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(720, 480));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(720, 480));
        previousButton = new QPushButton(widget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(50, 140, 80, 23));
        famicom = new QLabel(widget);
        famicom->setObjectName(QString::fromUtf8("famicom"));
        famicom->setGeometry(QRect(180, 160, 400, 300));
        famicom->setAlignment(Qt::AlignCenter);
        background = new QLabel(widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 720, 480));
        background->setScaledContents(true);
        debugButton = new QPushButton(widget);
        debugButton->setObjectName(QString::fromUtf8("debugButton"));
        debugButton->setGeometry(QRect(510, 10, 80, 23));
        helpButton = new QPushButton(widget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(590, 10, 80, 23));
        nextButton = new QPushButton(widget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(560, 140, 80, 23));
        helpScreen = new QLabel(widget);
        helpScreen->setObjectName(QString::fromUtf8("helpScreen"));
        helpScreen->setGeometry(QRect(60, 40, 600, 400));
        helpScreen->setMinimumSize(QSize(600, 400));
        helpScreen->setScaledContents(true);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 150, 151, 71));
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 100, 531, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gameTitle = new QLabel(gridLayoutWidget);
        gameTitle->setObjectName(QString::fromUtf8("gameTitle"));
        gameTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(gameTitle, 0, 0, 1, 1);

        helpScreen->raise();
        background->raise();
        previousButton->raise();
        famicom->raise();
        debugButton->raise();
        helpButton->raise();
        nextButton->raise();
        gridLayoutWidget->raise();
        label->raise();
        gridLayoutWidget->raise();

        horizontalLayout->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 20));
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
        previousButton->setText(QString());
        famicom->setText(QCoreApplication::translate("MainWindow", "Famicom", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        debugButton->setText(QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
        helpButton->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        nextButton->setText(QString());
        helpScreen->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ROM", nullptr));
        gameTitle->setText(QCoreApplication::translate("MainWindow", "ROM Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
