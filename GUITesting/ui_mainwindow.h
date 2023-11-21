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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *menuWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *debugButton;
    QPushButton *helpButton;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *gameTitle;
    QSpacerItem *horizontalSpacer_5;
    QWidget *romWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *romLeftSpacer1;
    QPushButton *previousButton;
    QSpacerItem *romLeftSpacer2;
    QSpacerItem *romLeftSpacer3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *nextButton;
    QSpacerItem *horizontalSpacer_8;
    QWidget *famicomWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *famicomLeftSpacer;
    QLabel *famicom;
    QSpacerItem *famicomRightSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(720, 480);
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
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        menuWidget = new QWidget(centralWidget);
        menuWidget->setObjectName(QString::fromUtf8("menuWidget"));
        horizontalLayout = new QHBoxLayout(menuWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        debugButton = new QPushButton(menuWidget);
        debugButton->setObjectName(QString::fromUtf8("debugButton"));

        horizontalLayout->addWidget(debugButton);

        helpButton = new QPushButton(menuWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));

        horizontalLayout->addWidget(helpButton);


        verticalLayout->addWidget(menuWidget);

        titleWidget = new QWidget(centralWidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        horizontalLayout_4 = new QHBoxLayout(titleWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        gameTitle = new QLabel(titleWidget);
        gameTitle->setObjectName(QString::fromUtf8("gameTitle"));

        horizontalLayout_4->addWidget(gameTitle);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(titleWidget);

        romWidget = new QWidget(centralWidget);
        romWidget->setObjectName(QString::fromUtf8("romWidget"));
        horizontalLayout_2 = new QHBoxLayout(romWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        romLeftSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(romLeftSpacer1);

        previousButton = new QPushButton(romWidget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));

        horizontalLayout_2->addWidget(previousButton);

        romLeftSpacer2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(romLeftSpacer2);

        romLeftSpacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(romLeftSpacer3);

        label = new QLabel(romWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 100));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        horizontalSpacer_11 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        nextButton = new QPushButton(romWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_2->addWidget(nextButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(romWidget);

        famicomWidget = new QWidget(centralWidget);
        famicomWidget->setObjectName(QString::fromUtf8("famicomWidget"));
        horizontalLayout_3 = new QHBoxLayout(famicomWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        famicomLeftSpacer = new QSpacerItem(235, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(famicomLeftSpacer);

        famicom = new QLabel(famicomWidget);
        famicom->setObjectName(QString::fromUtf8("famicom"));
        sizePolicy.setHeightForWidth(famicom->sizePolicy().hasHeightForWidth());
        famicom->setSizePolicy(sizePolicy);
        famicom->setMinimumSize(QSize(180, 150));
        famicom->setScaledContents(false);
        famicom->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(famicom);

        famicomRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(famicomRightSpacer);


        verticalLayout->addWidget(famicomWidget);

        verticalSpacer_2 = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        debugButton->setText(QString());
        helpButton->setText(QString());
        gameTitle->setText(QCoreApplication::translate("MainWindow", "gameTitle", nullptr));
        previousButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "rom", nullptr));
        nextButton->setText(QString());
        famicom->setText(QCoreApplication::translate("MainWindow", "famicom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
