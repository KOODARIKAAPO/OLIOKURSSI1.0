#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    bool currentPlayer;
    short gametime;
    QTimer* pQtimer;
    void setGameInfoText(const QString &text,short time);
    void endGame(const QString &message);
    bool gameRunning;





private slots:
void updateProgressBar();
void switchPlayer();
void setTime1();
void setTime2();
void startGame();
void stopGame();

};
#endif // MAINWINDOW_H
