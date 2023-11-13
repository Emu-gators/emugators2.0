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
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QLabel *gameTitle;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *famicom;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QLabel *helpScreen;
    QPushButton *helpButton;
    QPushButton *debugButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(881, 697);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(720, 480));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(720, 480));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        gameTitle = new QLabel(centralWidget);
        gameTitle->setObjectName(QString::fromUtf8("gameTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gameTitle->sizePolicy().hasHeightForWidth());
        gameTitle->setSizePolicy(sizePolicy1);
        gameTitle->setScaledContents(true);
        gameTitle->setAlignment(Qt::AlignCenter);
        gameTitle->setWordWrap(false);

        gridLayout_2->addWidget(gameTitle, 2, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 100));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 4, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 4, 2, 1, 1);

        famicom = new QLabel(centralWidget);
        famicom->setObjectName(QString::fromUtf8("famicom"));
        sizePolicy.setHeightForWidth(famicom->sizePolicy().hasHeightForWidth());
        famicom->setSizePolicy(sizePolicy);
        famicom->setMinimumSize(QSize(180, 150));
        famicom->setLayoutDirection(Qt::LeftToRight);
        famicom->setScaledContents(true);
        famicom->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(famicom, 6, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 5, 1, 1);

        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        gridLayout_2->addWidget(nextButton, 4, 5, 1, 1);

        previousButton = new QPushButton(centralWidget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));

        gridLayout_2->addWidget(previousButton, 4, 1, 1, 1);

        helpScreen = new QLabel(centralWidget);
        helpScreen->setObjectName(QString::fromUtf8("helpScreen"));
        sizePolicy.setHeightForWidth(helpScreen->sizePolicy().hasHeightForWidth());
        helpScreen->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(helpScreen, 1, 5, 2, 1);

        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));

        gridLayout_2->addWidget(helpButton, 0, 6, 1, 1);

        debugButton = new QPushButton(centralWidget);
        debugButton->setObjectName(QString::fromUtf8("debugButton"));

        gridLayout_2->addWidget(debugButton, 0, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer, 7, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 4, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 881, 25));
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
        gameTitle->setText(QCoreApplication::translate("MainWindow", "gameTItle", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "rom", nullptr));
        famicom->setText(QCoreApplication::translate("MainWindow", "famicom", nullptr));
        nextButton->setText(QString());
        previousButton->setText(QString());
        helpScreen->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        helpButton->setText(QString());
        debugButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
