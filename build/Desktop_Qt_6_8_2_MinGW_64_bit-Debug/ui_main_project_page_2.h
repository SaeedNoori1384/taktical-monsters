/********************************************************************************
** Form generated from reading UI file 'main_project_page_2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PROJECT_PAGE_2_H
#define UI_MAIN_PROJECT_PAGE_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_project_page_2
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_project_page_2)
    {
        if (Main_project_page_2->objectName().isEmpty())
            Main_project_page_2->setObjectName("Main_project_page_2");
        Main_project_page_2->resize(1920, 1080);
        Main_project_page_2->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 89, 89);"));
        centralwidget = new QWidget(Main_project_page_2);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 2100, 750));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 690, 171, 51));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 53, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1070, 690, 341, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));
        Main_project_page_2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_project_page_2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 25));
        Main_project_page_2->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_project_page_2);
        statusbar->setObjectName("statusbar");
        Main_project_page_2->setStatusBar(statusbar);

        retranslateUi(Main_project_page_2);
        QObject::connect(pushButton, &QPushButton::clicked, Main_project_page_2, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, Main_project_page_2, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Main_project_page_2);
    } // setupUi

    void retranslateUi(QMainWindow *Main_project_page_2)
    {
        Main_project_page_2->setWindowTitle(QCoreApplication::translate("Main_project_page_2", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Main_project_page_2", "Gallary", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Main_project_page_2", "Start an async PVP Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_project_page_2: public Ui_Main_project_page_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PROJECT_PAGE_2_H
