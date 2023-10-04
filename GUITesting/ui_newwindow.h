/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWindow
{
public:
    QLabel *target1;
    QLabel *target2;
    QLabel *background;
    QLabel *target3;
    QLabel *target4;
    QLabel *target5;

    void setupUi(QWidget *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName(QString::fromUtf8("NewWindow"));
        NewWindow->resize(1920, 1080);
        target1 = new QLabel(NewWindow);
        target1->setObjectName(QString::fromUtf8("target1"));
        target1->setGeometry(QRect(515, 170, 100, 100));
        target2 = new QLabel(NewWindow);
        target2->setObjectName(QString::fromUtf8("target2"));
        target2->setGeometry(QRect(1307, 685, 100, 100));
        background = new QLabel(NewWindow);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1920, 1080));
        target3 = new QLabel(NewWindow);
        target3->setObjectName(QString::fromUtf8("target3"));
        target3->setGeometry(QRect(515, 685, 100, 100));
        target4 = new QLabel(NewWindow);
        target4->setObjectName(QString::fromUtf8("target4"));
        target4->setGeometry(QRect(1307, 170, 100, 100));
        target5 = new QLabel(NewWindow);
        target5->setObjectName(QString::fromUtf8("target5"));
        target5->setGeometry(QRect(910, 428, 100, 100));

        retranslateUi(NewWindow);

        QMetaObject::connectSlotsByName(NewWindow);
    } // setupUi

    void retranslateUi(QWidget *NewWindow)
    {
        NewWindow->setWindowTitle(QCoreApplication::translate("NewWindow", "Calibration", nullptr));
        target1->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        target2->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        background->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        target3->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        target4->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        target5->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
