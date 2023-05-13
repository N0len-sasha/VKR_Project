/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
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
    QFrame *frame;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QFrame *frame1;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QFrame *frame_3;
    QLabel *label_3;
    QFrame *frame_4;
    QLabel *label_4;
    QFrame *frame_5;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 76, 1031));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 74, 110);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(14, 250, 46, 45));
        pushButton_4->setStyleSheet(QString::fromUtf8("background:rgb(74, 74, 110)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Desktop/VKR_Project/\320\237\321\200\320\270\320\272\320\260\320\267\321\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(46, 45));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(14, 90, 46, 45));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(74, 74, 110)"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Desktop/VKR_Project/\320\232\320\260\320\275\320\264\320\270\320\264\320\260\321\202\321\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(46, 45));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(14, 10, 46, 45));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Desktop/VKR_Project/image 2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(46, 45));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(14, 170, 46, 45));
        pushButton_3->setStyleSheet(QString::fromUtf8("background:rgb(74, 74, 110)"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Desktop/VKR_Project/\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(46, 45));
        frame1 = new QFrame(centralwidget);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(76, -3, 1851, 1031));
        frame1->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 244, 244);\n"
"font: 12pt \"Segoe UI\";"));
        label = new QLabel(frame1);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 561, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 28pt \"Imprint MT Shadow\";\n"
"gravity:center;"));
        frame_2 = new QFrame(frame1);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(70, 146, 1828, 911));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 49, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_5 = new QPushButton(frame1);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(70, 100, 191, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);\n"
"color:rgb(0, 0, 0);"));
        pushButton_6 = new QPushButton(frame1);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(261, 100, 191, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 171, 171);\n"
"color:rgb(0, 0, 0);\n"
""));
        pushButton_7 = new QPushButton(frame1);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(452, 100, 191, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 171, 171);\n"
"color:rgb(0, 0, 0);"));
        pushButton_8 = new QPushButton(frame1);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(643, 100, 191, 51));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 171, 171);\n"
"color:rgb(0, 0, 0);"));
        frame_3 = new QFrame(frame1);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(70, 146, 1828, 911));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 30, 49, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        frame_4 = new QFrame(frame1);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(70, 146, 1828, 911));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 30, 49, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        frame_5 = new QFrame(frame1);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(70, 146, 1828, 911));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);"));
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 30, 49, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_8->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        pushButton_5->raise();
        frame_4->raise();
        frame_5->raise();
        label->raise();
        frame_3->raise();
        frame_2->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
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
        pushButton_4->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\320\260\321\217 \320\272\320\260\321\200\321\202\320\276\321\207\320\272\320\260", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\272\320\260\320\267\321\213", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\321\203\320\264\320\276\320\262\320\276\320\271 \320\264\320\276\320\263\320\276\320\262\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ID 2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ID 3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ID 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
