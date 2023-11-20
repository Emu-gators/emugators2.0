/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWindow
{
public:
    QPushButton *topLeft;
    QPushButton *bottomRight;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *scoreLabel;

    void setupUi(QWidget *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName(QString::fromUtf8("NewWindow"));
        NewWindow->resize(720, 480);
        topLeft = new QPushButton(NewWindow);
        topLeft->setObjectName(QString::fromUtf8("topLeft"));
        topLeft->setGeometry(QRect(210, 130, 75, 23));
        bottomRight = new QPushButton(NewWindow);
        bottomRight->setObjectName(QString::fromUtf8("bottomRight"));
        bottomRight->setGeometry(QRect(420, 130, 75, 23));
        graphicsView = new QGraphicsView(NewWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(220, 230, 256, 192));
        widget = new QWidget(NewWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 720, 80));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scoreLabel = new QLabel(widget);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setLayoutDirection(Qt::LeftToRight);
        scoreLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(scoreLabel);


        retranslateUi(NewWindow);

        QMetaObject::connectSlotsByName(NewWindow);
    } // setupUi

    void retranslateUi(QWidget *NewWindow)
    {
        NewWindow->setWindowTitle(QCoreApplication::translate("NewWindow", "Calibration", nullptr));
        topLeft->setText(QString());
        bottomRight->setText(QString());
        scoreLabel->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
