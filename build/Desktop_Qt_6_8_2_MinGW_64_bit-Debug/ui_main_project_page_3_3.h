/********************************************************************************
** Form generated from reading UI file 'main_project_page_3_3.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PROJECT_PAGE_3_3_H
#define UI_MAIN_PROJECT_PAGE_3_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Project_page_3_3
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_Project_page_3_3)
    {
        if (Main_Project_page_3_3->objectName().isEmpty())
            Main_Project_page_3_3->setObjectName("Main_Project_page_3_3");
        Main_Project_page_3_3->resize(1920, 1080);
        centralwidget = new QWidget(Main_Project_page_3_3);
        centralwidget->setObjectName("centralwidget");
        Main_Project_page_3_3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_Project_page_3_3);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 25));
        Main_Project_page_3_3->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_Project_page_3_3);
        statusbar->setObjectName("statusbar");
        Main_Project_page_3_3->setStatusBar(statusbar);

        retranslateUi(Main_Project_page_3_3);

        QMetaObject::connectSlotsByName(Main_Project_page_3_3);
    } // setupUi

    void retranslateUi(QMainWindow *Main_Project_page_3_3)
    {
        Main_Project_page_3_3->setWindowTitle(QCoreApplication::translate("Main_Project_page_3_3", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_Project_page_3_3: public Ui_Main_Project_page_3_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PROJECT_PAGE_3_3_H
