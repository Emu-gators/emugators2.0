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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_6;
    QLabel *gameTitle;
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
        previousButton->setGeometry(QRect(80, 260, 80, 23));
        famicom = new QLabel(widget);
        famicom->setObjectName(QString::fromUtf8("famicom"));
        famicom->setGeometry(QRect(220, 280, 400, 300));
        famicom->setAlignment(Qt::AlignCenter);
        background = new QLabel(widget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 801, 701));
        debugButton = new QPushButton(widget);
        debugButton->setObjectName(QString::fromUtf8("debugButton"));
        debugButton->setGeometry(QRect(340, 20, 80, 23));
        helpButton = new QPushButton(widget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(680, 20, 80, 23));
        nextButton = new QPushButton(widget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(620, 260, 80, 23));
        helpScreen = new QLabel(widget);
        helpScreen->setObjectName(QString::fromUtf8("helpScreen"));
        helpScreen->setGeometry(QRect(50, 50, 700, 500));
        helpScreen->setMinimumSize(QSize(700, 500));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 150, 781, 80));
        gridLayout_6 = new QGridLayout(gridLayoutWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gameTitle = new QLabel(gridLayoutWidget);
        gameTitle->setObjectName(QString::fromUtf8("gameTitle"));
        gameTitle->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(gameTitle, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 230, 151, 71));
        label->setAlignment(Qt::AlignCenter);
        helpScreen->raise();
        background->raise();
        previousButton->raise();
        famicom->raise();
        debugButton->raise();
        helpButton->raise();
        nextButton->raise();
        gridLayoutWidget->raise();
        label->raise();

        horizontalLayout->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 18));
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
        gameTitle->setText(QCoreApplication::translate("MainWindow", "ROM Title", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ROM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
