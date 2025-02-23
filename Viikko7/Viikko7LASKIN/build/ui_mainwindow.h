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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *d1;
    QLineEdit *d2;
    QLineEdit *d3;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *n6;
    QPushButton *n5;
    QPushButton *n4;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *n9;
    QPushButton *enter;
    QPushButton *n8;
    QPushButton *clear;
    QPushButton *n7;
    QPushButton *n0;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 50, 111, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 50, 91, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 60, 71, 31));
        d1 = new QLineEdit(centralwidget);
        d1->setObjectName("d1");
        d1->setGeometry(QRect(102, 90, 121, 31));
        d2 = new QLineEdit(centralwidget);
        d2->setObjectName("d2");
        d2->setGeometry(QRect(232, 90, 121, 31));
        d3 = new QLineEdit(centralwidget);
        d3->setObjectName("d3");
        d3->setGeometry(QRect(370, 90, 131, 31));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName("n1");
        n1->setGeometry(QRect(110, 140, 81, 51));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName("n2");
        n2->setGeometry(QRect(210, 140, 81, 51));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName("n3");
        n3->setGeometry(QRect(310, 140, 81, 51));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(410, 140, 81, 51));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(410, 200, 81, 51));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName("n6");
        n6->setGeometry(QRect(310, 200, 81, 51));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName("n5");
        n5->setGeometry(QRect(210, 200, 81, 51));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName("n4");
        n4->setGeometry(QRect(110, 200, 81, 51));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(410, 260, 81, 51));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(410, 320, 81, 51));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName("n9");
        n9->setGeometry(QRect(310, 260, 81, 51));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(310, 320, 81, 51));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName("n8");
        n8->setGeometry(QRect(210, 260, 81, 51));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(210, 320, 81, 51));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName("n7");
        n7->setGeometry(QRect(110, 260, 81, 51));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName("n0");
        n0->setGeometry(QRect(110, 320, 81, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
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
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
