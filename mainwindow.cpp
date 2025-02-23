#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Nappi,&QPushButton::clicked,this,&MainWindow::handleClick);
    connect(ui->pushButton, &QPushButton::clicked,this,&MainWindow::handleReset);
    ui->laatikko->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    bool ok;
    int currentValue = ui->laatikko->text().toInt(&ok);
    if(ok){
        currentValue+= 1;
        ui->laatikko->setText(QString::number(currentValue));
        qDebug()<<"click vastaanotettu, nykyinen arvo: " << currentValue;
    }else{
        qDebug()<<"virhe";
    }

}

void MainWindow::handleReset()
{
    ui->laatikko->setText("0");
        qDebug()<<"Reset vastaanotettu, nykyinen arvo: 0";
}
