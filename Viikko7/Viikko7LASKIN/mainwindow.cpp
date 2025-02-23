#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(0)
    , operand(0)
    , result(0.0)
{
    ui->setupUi(this);

    // yhdistetään numerot numberClickhandleriin
    connect(ui->n0, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n1, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n2, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n3, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n4, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n5, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n6, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n7, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n8, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    connect(ui->n9, &QPushButton::clicked, this, &MainWindow::numberClickHandler);

    //Yhdistetään loput napit omiin handlereihin
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender()); //pointerin avulla tutkitaan mitä nappia käyttäjä painaa
    if (button){
        QString buttontext = button->text();
        qDebug()<<"state before click:" <<state;
        if (state == 0){
            number1+= buttontext;
            ui->d1->setText(number1);
        }else{
            number2 += buttontext;
            ui->d2->setText(number2);
        }
        qDebug() << "Number button clicked, current text: " << (state == 0 ? number1 : number2);
    }
}

void MainWindow::clearAndEnterClickHandler()

{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button->text() == "clear") {
        resetLineEdits();
    }else if (button->text() == "enter"){
        float num1 = number1.toFloat();// num1 on alkujaan Qstringarvo, se pitää muuttaa floatiksi laskuja varten
        float num2 = number2.toFloat();
        switch (operand) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: result = num1 / num2; break;
        default:result = 0; break;
        }
        ui->d3->setText(QString::number(result));
        qDebug() << "enter button clicked, result:"<<result;
     }
}


void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        if (button->text() == "+") {
            operand = 1;
        } else if (button->text() == "-") {
            operand = 2;
        } else if (button->text() == "*") {
            operand = 3;
        } else if (button->text() == "/") {
            operand = 4;
        }
        state = 1; // State 1 vie toiseen numeron
        qDebug() << "Operation button clicked, operand:" << operand;
    }
}



void MainWindow::resetLineEdits()
{
    number1.clear();
    number2.clear();
    state = 0;
    result = 0.0;
    operand = 0;
    ui->d1->clear();
    ui->d2->clear();
    ui->d3->clear();
    qDebug() << "Clear button clicked, all values reset";
}
