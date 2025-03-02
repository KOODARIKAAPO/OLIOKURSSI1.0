/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *PB1;
    QProgressBar *PB2;
    QPushButton *SP1;
    QPushButton *SP2;
    QPushButton *SetTime1;
    QPushButton *SetTime2;
    QPushButton *START;
    QPushButton *STOP;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        PB1 = new QProgressBar(centralwidget);
        PB1->setObjectName("PB1");
        PB1->setGeometry(QRect(210, 30, 131, 61));
        PB1->setValue(24);
        PB2 = new QProgressBar(centralwidget);
        PB2->setObjectName("PB2");
        PB2->setGeometry(QRect(470, 50, 131, 23));
        PB2->setValue(24);
        SP1 = new QPushButton(centralwidget);
        SP1->setObjectName("SP1");
        SP1->setGeometry(QRect(240, 120, 100, 32));
        SP2 = new QPushButton(centralwidget);
        SP2->setObjectName("SP2");
        SP2->setGeometry(QRect(480, 120, 100, 32));
        SetTime1 = new QPushButton(centralwidget);
        SetTime1->setObjectName("SetTime1");
        SetTime1->setGeometry(QRect(250, 310, 111, 41));
        SetTime2 = new QPushButton(centralwidget);
        SetTime2->setObjectName("SetTime2");
        SetTime2->setGeometry(QRect(460, 310, 111, 41));
        START = new QPushButton(centralwidget);
        START->setObjectName("START");
        START->setGeometry(QRect(260, 410, 100, 32));
        STOP = new QPushButton(centralwidget);
        STOP->setObjectName("STOP");
        STOP->setGeometry(QRect(470, 410, 100, 32));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 210, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
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
        SP1->setText(QCoreApplication::translate("MainWindow", "SwitchPlayer", nullptr));
        SP2->setText(QCoreApplication::translate("MainWindow", "SwitchPlayer", nullptr));
        SetTime1->setText(QCoreApplication::translate("MainWindow", "120sec", nullptr));
        SetTime2->setText(QCoreApplication::translate("MainWindow", "5min", nullptr));
        START->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        STOP->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
