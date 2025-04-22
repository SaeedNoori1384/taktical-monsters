/********************************************************************************
** Form generated from reading UI file 'main_project_page_3_2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PROJECT_PAGE_3_2_H
#define UI_MAIN_PROJECT_PAGE_3_2_H

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

class Ui_Main_project_page_3_2
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_project_page_3_2)
    {
        if (Main_project_page_3_2->objectName().isEmpty())
            Main_project_page_3_2->setObjectName("Main_project_page_3_2");
        Main_project_page_3_2->resize(1920, 1080);
        Main_project_page_3_2->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 62, 62);"));
        centralwidget = new QWidget(Main_project_page_3_2);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 160, 301, 61));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 255, 26);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(740, 160, 301, 61));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 255, 26);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(310, 370, 251, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(52, 255, 231,0.5);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(770, 370, 251, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(52, 255, 231,0.5);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 660, 271, 71));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        Main_project_page_3_2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_project_page_3_2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 25));
        Main_project_page_3_2->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_project_page_3_2);
        statusbar->setObjectName("statusbar");
        Main_project_page_3_2->setStatusBar(statusbar);

        retranslateUi(Main_project_page_3_2);
        QObject::connect(pushButton, &QPushButton::clicked, Main_project_page_3_2, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Main_project_page_3_2);
    } // setupUi

    void retranslateUi(QMainWindow *Main_project_page_3_2)
    {
        Main_project_page_3_2->setWindowTitle(QCoreApplication::translate("Main_project_page_3_2", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Main_project_page_3_2", "\330\250\330\247\330\262\333\214\332\251\331\206 \330\264\331\205\330\247\330\261\331\207 \333\262 :", nullptr));
        label_2->setText(QCoreApplication::translate("Main_project_page_3_2", "\330\250\330\247\330\262\333\214\332\251\331\206 \330\264\331\205\330\247\330\261\331\207 \333\261 :", nullptr));
        pushButton->setText(QCoreApplication::translate("Main_project_page_3_2", "\330\250\330\262\331\206 \330\250\330\261\333\214\331\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_project_page_3_2: public Ui_Main_project_page_3_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PROJECT_PAGE_3_2_H
