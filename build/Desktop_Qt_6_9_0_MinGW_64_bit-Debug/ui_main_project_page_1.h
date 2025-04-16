/********************************************************************************
** Form generated from reading UI file 'main_project_page_1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PROJECT_PAGE_1_H
#define UI_MAIN_PROJECT_PAGE_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_project_page_1
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_project_page_1)
    {
        if (Main_project_page_1->objectName().isEmpty())
            Main_project_page_1->setObjectName("Main_project_page_1");
        Main_project_page_1->resize(1920, 1080);
        Main_project_page_1->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 76, 76);"));
        centralwidget = new QWidget(Main_project_page_1);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 2100, 750));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 60, 531, 51));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(67, 255, 170);\n"
"background-color: rgba(255, 255, 255,0.01);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1140, 700, 231, 51));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 244, 255);"));
        Main_project_page_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_project_page_1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 25));
        Main_project_page_1->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_project_page_1);
        statusbar->setObjectName("statusbar");
        Main_project_page_1->setStatusBar(statusbar);

        retranslateUi(Main_project_page_1);
        QObject::connect(pushButton, &QPushButton::clicked, Main_project_page_1, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Main_project_page_1);
    } // setupUi

    void retranslateUi(QMainWindow *Main_project_page_1)
    {
        Main_project_page_1->setWindowTitle(QCoreApplication::translate("Main_project_page_1", "Main_project_page_1", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Main_project_page_1", "Welcome to Tactical Monsters", nullptr));
        pushButton->setText(QCoreApplication::translate("Main_project_page_1", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_project_page_1: public Ui_Main_project_page_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PROJECT_PAGE_1_H
