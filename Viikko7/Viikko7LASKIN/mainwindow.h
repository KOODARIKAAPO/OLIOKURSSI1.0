#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    QString number1, number2; //printtaa QLineEdittiin
    int state; // kertoo missä näytössä mennään
    float result; //laskun tulos
    short operand; //operand varastoidaan kun käyttäjä painaa+,-,* tai /

    void numberClickHandler(); //kutsutaan kaikista numeroiden clickhandlereista
    void clearAndEnterClickHandler(); //hallinnoi clera ja enterin
    void addSubMulDivClickHandler(); //operaatioiden cklickihandleri
    void resetLineEdits(); //nollaa kaikki QLineeditit
};
#endif // MAINWINDOW_H
