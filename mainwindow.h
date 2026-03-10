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

    enum State {
        FirstDigit,
        SecondDigit,
        Operation,
        InputNumber
    };


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_digit();
    void on_pbPoint_clicked();
    void on_pbPlmin();
    void math();
    void on_pbRavno_clicked();
    void clear();
    void Memory();

private:
    double fir;
    double ns;
    QString lastOp;
    QString op;
    double chislo;
    Ui::MainWindow *ui;
    State state;
    bool flagSecond = false;
};
#endif // MAINWINDOW_H
