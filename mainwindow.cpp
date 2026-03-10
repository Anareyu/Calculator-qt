#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*state = State::FirstDigit;
    a=0;
    op=L'+';*/
    connect(
        ui->pb1, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb2, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb0, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb3, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb4, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb5, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb6, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb7, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb8, &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pb9 , &QPushButton::clicked,
        this, &MainWindow::on_digit
        );
    connect(
        ui->pbplmin , &QPushButton::clicked,
        this, &MainWindow::on_pbPlmin
        );
    connect(
        ui->pbPlus , &QPushButton::clicked,
        this, &MainWindow::math
        );
    connect(
        ui->pbMin , &QPushButton::clicked,
        this, &MainWindow::math
        );
    connect(
        ui->pbPro , &QPushButton::clicked,
        this, &MainWindow::math
        );
    connect(
        ui->pbDel , &QPushButton::clicked,
        this, &MainWindow::math
        );
    connect(
        ui->pbC , &QPushButton::clicked,
        this, &MainWindow::clear
        );
    connect(
        ui->pbCE , &QPushButton::clicked,
        this, &MainWindow::clear
        );
    connect(
        ui->pbMS , &QPushButton::clicked,
        this, &MainWindow::Memory
        );
    connect(
        ui->pbMC , &QPushButton::clicked,
        this, &MainWindow::Memory
        );
    connect(
        ui->pbMr, &QPushButton::clicked,
        this, &MainWindow::Memory
        );
    connect(
        ui->pbMpl , &QPushButton::clicked,
        this, &MainWindow::Memory
        );
    connect(
        ui->pbMmin , &QPushButton::clicked,
        this, &MainWindow::Memory
        );

    ui->pbDel->setCheckable(true);
    ui->pbPro->setCheckable(true);
    ui->pbMin->setCheckable(true);
    ui->pbPlus->setCheckable(true);
    ui->pbMS->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: on_digit(){
    if(ui->lblResult->text()=="0")
        ui->lblResult->setText("");
    QString d = dynamic_cast<QPushButton*>(sender())->text();
    if(state==State::FirstDigit){
        ui->lblResult->setText("");
    }
    else if(state == State::Operation){
        ui->lblResult->setText("");
        if (lastOp == ui->pbRavno->text()){
            fir = (ui->lblResult->text()+d).toDouble();
            state = State::InputNumber;
        }

        flagSecond = true;
        op = lastOp;
    }

    ui->lblResult->setText(ui->lblResult->text()+d);
    state = State::InputNumber;
}

void MainWindow:: on_pbPlmin(){
    double o = (ui->lblResult->text()).toDouble();
    o=o*(-1);
    QString d = QString::number(o,'g',15);
    ui->lblResult->setText(d);
}

void MainWindow::on_pbPoint_clicked()
{
    if(!(ui->lblResult->text().contains('.')))
        ui->lblResult->setText(ui->lblResult->text()+".");
}

void MainWindow::math()
{
    if (state == State::Operation){
        ui->pbPlus->setChecked(false);
        ui->pbMin->setChecked(false);
        ui->pbPro->setChecked(false);
        ui->pbDel->setChecked(false);
    }

    double ns;
    if (!flagSecond){
        fir=ui->lblResult->text().toDouble();
    }
    else if(state == State::InputNumber){
        ns=ui->lblResult->text().toDouble();
        if(ui->pbDel->text() == op){
            fir=fir/ns;
            if(ns==0)
                fir=0;

            QString d = QString::number(fir,'g',15);

            ui->lblResult->setText(d);
            ui->pbDel->setChecked(false);
        }else if(ui->pbPlus->text() == op){
            fir=fir+ns;
            QString d = QString::number(fir,'g',15);
            ui->lblResult->setText(d);
            ui->pbPlus->setChecked(false);
        }else if(ui->pbPro->text() == op){
            fir=fir*ns;
            QString d = QString::number(fir,'g',15);
            ui->lblResult->setText(d);
            ui->pbPro->setChecked(false);
        }else if(ui->pbMin->text() == op){
            fir =fir-ns;
            QString d = QString::number(fir,'g',15);
            ui->lblResult->setText(d);
            ui->pbMin->setChecked(false);
        }
        flagSecond=false;
    }

    QPushButton *button=(QPushButton *)sender();
    lastOp = button->text();
    button->setChecked(true);
    state = State::Operation;
}


void MainWindow::clear()
{
    QPushButton *button=(QPushButton *)sender();

    if (button->text()=="C"){
        fir = 0;
        ui->lblResult->setText("0");
        ui->pbPlus->setChecked(false);
        ui->pbDel->setChecked(false);
        ui->pbPro->setChecked(false);
        ui->pbMin->setChecked(false);
    } else if(button->text()=="CE"){
        ui->lblResult->setText("0");
    }
    state=State::FirstDigit;
}
void MainWindow::on_pbRavno_clicked()
{
    if (state==State::InputNumber){
        ns=ui->lblResult->text().toDouble();
    }

    if(ui->pbDel->text() == lastOp){
        fir=fir/ns;
        if(ns==0)
            fir=0;

        QString d = QString::number(fir,'g',15);

        ui->lblResult->setText(d);
        ui->pbDel->setChecked(false);
    }else if(ui->pbPlus->text() == lastOp){
        fir=fir+ns;
        QString d = QString::number(fir,'g',15);
        ui->lblResult->setText(d);
        ui->pbPlus->setChecked(false);
    }else if(ui->pbPro->text() == lastOp){
        fir=fir*ns;
        QString d = QString::number(fir,'g',15);
        ui->lblResult->setText(d);
        ui->pbPro->setChecked(false);
    }else if(ui->pbMin->text() == lastOp){
        fir =fir-ns;
        QString d = QString::number(fir,'g',15);
        ui->lblResult->setText(d);
        ui->pbMin->setChecked(false);
    }

    state = State::FirstDigit;
    flagSecond=false;
}
void MainWindow:: Memory()
{
    QPushButton *button=(QPushButton *)sender();
    ui->pbMC->setChecked(false);
    if(button->text()=="MS"){
        chislo= ui->lblResult->text().toDouble();
        ui->pbMS->setChecked(true);
    }else if(button->text()=="MR"){
        if(ui->pbMS->isChecked()){
            ui->lblResult->setText(QString::number(chislo,'g',15));
        }
    }else if(button->text()=="MC"){
        ui->pbMS->setChecked(false);
    }else if(button->text()=="M+"){
        chislo+=ui->lblResult->text().toDouble();
        ui->pbMS->setChecked(true);
    }else if(button->text()=="M-"){
        chislo-=ui->lblResult->text().toDouble();
        ui->pbMS->setChecked(true);
    }
    state = State::FirstDigit;
}
