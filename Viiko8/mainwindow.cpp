#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,player1Time(0)
    ,player2Time(0)
    ,currentPlayer(true)
    ,gametime(0)
    ,gameRunning(false)
    ,pQtimer (new QTimer(this))

{
    ui->setupUi(this);
    connect(pQtimer, &QTimer::timeout, this ,&MainWindow::updateProgressBar);
    connect(ui->SP1,&QPushButton::clicked, this,&MainWindow::switchPlayer);
    connect(ui->SP2,&QPushButton::clicked, this,&MainWindow::switchPlayer);
    connect(ui->SetTime1, &QPushButton::clicked, this, &MainWindow::setTime1);
    connect(ui->SetTime2, &QPushButton::clicked, this, &MainWindow::setTime2);
    connect(ui->START, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->STOP, &QPushButton::clicked, this, &MainWindow::stopGame);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressBar()
{
    if (!gameRunning) return;

    if (currentPlayer) {
        if (player1Time > 0) {
            player1Time--;
            ui->PB1->setValue(player1Time);
        }
        if (player1Time == 0) {
            endGame("Player 2 Wins!");
        }
    } else {
        if (player2Time > 0) {
            player2Time--;
            ui->PB2->setValue(player2Time);
        }
        if (player2Time == 0) {
            endGame("Player 1 Wins!");
        }
    }
}


void MainWindow::switchPlayer()
{
    if (!gameRunning) return;
    currentPlayer = !currentPlayer;
}


void MainWindow::setTime1()
{
    gametime = 120;
    player1Time = gametime;
    player2Time = gametime;
    ui->PB1->setMaximum(gametime);
    ui->PB2->setMaximum(gametime);
    ui->PB2->setValue(gametime);
    ui->PB1->setValue(gametime);
    setGameInfoText("Ready to play", 10);
}

void MainWindow::setTime2()
{
    gametime = 300;
    player1Time = gametime;
    player2Time = gametime;
    ui->PB1->setMaximum(gametime);
    ui->PB2->setMaximum(gametime);
    ui->PB1->setValue(gametime);
    ui->PB2->setValue(gametime);
    setGameInfoText("Ready to play, press start", 10);
}

void MainWindow::startGame()
{
    if(gametime==0)
    {
        setGameInfoText("Select playtime and press start the game",10);
        return;
    }
    gameRunning = true;
    currentPlayer = true;
    pQtimer->start(1000);
    setGameInfoText("Game started", 10);
}

void MainWindow::stopGame()
{
    pQtimer->stop();
    setGameInfoText("Game stopped", 10);
}

void MainWindow::setGameInfoText(const QString &text, short time)
{
    ui->label->setText(text);
    QFont font = ui->label->font();
    font.setPointSize(time);
    ui->label->setFont(font);
}

void MainWindow::endGame(const QString &message)
{
    gameRunning = false;
    pQtimer->stop();
    setGameInfoText(message, 10);
}
