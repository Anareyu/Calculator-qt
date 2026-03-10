/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblResult;
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
    QPushButton *pb4;
    QPushButton *pb5;
    QPushButton *pb6;
    QPushButton *pb7;
    QPushButton *pb8;
    QPushButton *pb9;
    QPushButton *pb0;
    QPushButton *pbRavno;
    QPushButton *pbPoint;
    QPushButton *pbplmin;
    QPushButton *pbMin;
    QPushButton *pbPlus;
    QPushButton *pbDel;
    QPushButton *pbPro;
    QPushButton *pbC;
    QPushButton *pbCE;
    QPushButton *pbMS;
    QPushButton *pbMr;
    QPushButton *pbMC;
    QPushButton *pbMmin;
    QPushButton *pbMpl;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(404, 311);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lblResult = new QLabel(centralwidget);
        lblResult->setObjectName("lblResult");
        lblResult->setGeometry(QRect(0, 0, 404, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        lblResult->setPalette(palette);
        QFont font;
        font.setPointSize(18);
        lblResult->setFont(font);
        lblResult->setAutoFillBackground(true);
        lblResult->setFrameShape(QFrame::Shape::Box);
        lblResult->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pb1 = new QPushButton(centralwidget);
        pb1->setObjectName("pb1");
        pb1->setGeometry(QRect(0, 180, 100, 40));
        QFont font1;
        font1.setPointSize(14);
        pb1->setFont(font1);
        pb1->setAutoFillBackground(false);
        pb1->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb2 = new QPushButton(centralwidget);
        pb2->setObjectName("pb2");
        pb2->setGeometry(QRect(100, 180, 100, 40));
        pb2->setFont(font1);
        pb2->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb3 = new QPushButton(centralwidget);
        pb3->setObjectName("pb3");
        pb3->setGeometry(QRect(200, 180, 100, 40));
        pb3->setFont(font1);
        pb3->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb4 = new QPushButton(centralwidget);
        pb4->setObjectName("pb4");
        pb4->setGeometry(QRect(0, 140, 100, 40));
        pb4->setFont(font1);
        pb4->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb5 = new QPushButton(centralwidget);
        pb5->setObjectName("pb5");
        pb5->setGeometry(QRect(100, 140, 100, 40));
        pb5->setFont(font1);
        pb5->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb6 = new QPushButton(centralwidget);
        pb6->setObjectName("pb6");
        pb6->setGeometry(QRect(200, 140, 100, 40));
        pb6->setFont(font1);
        pb6->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb7 = new QPushButton(centralwidget);
        pb7->setObjectName("pb7");
        pb7->setGeometry(QRect(0, 100, 100, 40));
        pb7->setFont(font1);
        pb7->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb8 = new QPushButton(centralwidget);
        pb8->setObjectName("pb8");
        pb8->setGeometry(QRect(100, 100, 100, 40));
        pb8->setFont(font1);
        pb8->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb9 = new QPushButton(centralwidget);
        pb9->setObjectName("pb9");
        pb9->setGeometry(QRect(200, 100, 100, 40));
        pb9->setFont(font1);
        pb9->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pb0 = new QPushButton(centralwidget);
        pb0->setObjectName("pb0");
        pb0->setGeometry(QRect(200, 220, 100, 40));
        pb0->setFont(font1);
        pb0->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbRavno = new QPushButton(centralwidget);
        pbRavno->setObjectName("pbRavno");
        pbRavno->setGeometry(QRect(315, 220, 90, 40));
        pbRavno->setFont(font1);
        pbRavno->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbPoint = new QPushButton(centralwidget);
        pbPoint->setObjectName("pbPoint");
        pbPoint->setGeometry(QRect(100, 220, 100, 40));
        pbPoint->setFont(font1);
        pbPoint->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbplmin = new QPushButton(centralwidget);
        pbplmin->setObjectName("pbplmin");
        pbplmin->setGeometry(QRect(0, 220, 100, 40));
        pbplmin->setFont(font1);
        pbplmin->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbMin = new QPushButton(centralwidget);
        pbMin->setObjectName("pbMin");
        pbMin->setGeometry(QRect(315, 140, 90, 40));
        pbMin->setFont(font1);
        pbMin->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbPlus = new QPushButton(centralwidget);
        pbPlus->setObjectName("pbPlus");
        pbPlus->setGeometry(QRect(315, 180, 90, 40));
        pbPlus->setFont(font1);
        pbPlus->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbDel = new QPushButton(centralwidget);
        pbDel->setObjectName("pbDel");
        pbDel->setGeometry(QRect(315, 60, 90, 40));
        pbDel->setFont(font1);
        pbDel->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbPro = new QPushButton(centralwidget);
        pbPro->setObjectName("pbPro");
        pbPro->setGeometry(QRect(315, 100, 90, 40));
        pbPro->setFont(font1);
        pbPro->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbC = new QPushButton(centralwidget);
        pbC->setObjectName("pbC");
        pbC->setGeometry(QRect(0, 60, 140, 40));
        pbC->setFont(font1);
        pbC->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbCE = new QPushButton(centralwidget);
        pbCE->setObjectName("pbCE");
        pbCE->setGeometry(QRect(160, 60, 140, 40));
        pbCE->setFont(font1);
        pbCE->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbMS = new QPushButton(centralwidget);
        pbMS->setObjectName("pbMS");
        pbMS->setGeometry(QRect(0, 270, 75, 40));
        pbMS->setFont(font1);
        pbMS->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbMr = new QPushButton(centralwidget);
        pbMr->setObjectName("pbMr");
        pbMr->setGeometry(QRect(80, 270, 75, 40));
        pbMr->setFont(font1);
        pbMr->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbMC = new QPushButton(centralwidget);
        pbMC->setObjectName("pbMC");
        pbMC->setGeometry(QRect(165, 270, 75, 40));
        pbMC->setFont(font1);
        pbMC->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbMmin = new QPushButton(centralwidget);
        pbMmin->setObjectName("pbMmin");
        pbMmin->setGeometry(QRect(330, 270, 75, 40));
        pbMmin->setFont(font1);
        pbMmin->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pbMpl = new QPushButton(centralwidget);
        pbMpl->setObjectName("pbMpl");
        pbMpl->setGeometry(QRect(250, 270, 75, 40));
        pbMpl->setFont(font1);
        pbMpl->setStyleSheet(QString::fromUtf8("QPushButton_clicked{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblResult->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pb1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        pb1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        pb2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        pb2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        pb3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        pb3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        pb4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        pb4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        pb5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        pb5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        pb6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        pb6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        pb7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        pb7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        pb8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        pb8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        pb9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        pb9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        pb0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        pb0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        pbRavno->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        pbRavno->setShortcut(QCoreApplication::translate("MainWindow", "=", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pbplmin->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pbMin->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        pbMin->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        pbPlus->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        pbDel->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        pbDel->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPro->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(shortcut)
        pbPro->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pbC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pbCE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pbMS->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        pbMr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pbMC->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pbMmin->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        pbMpl->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
