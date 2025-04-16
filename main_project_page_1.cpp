#include "main_project_page_1.h"
#include "ui_main_project_page_1.h"
#include <QLabel>
#include "main_project_page_2.h"


Main_project_page_1::Main_project_page_1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_project_page_1)
{
    ui->setupUi(this);
    QPixmap pix("D:/project/Main_project_page_1/page_1.png");
    ui->label->setPixmap(pix.scaled(2100,750 , Qt::KeepAspectRatio));
}

Main_project_page_1::~Main_project_page_1()
{
    delete ui;
}

void Main_project_page_1::on_pushButton_clicked()
{
    Main_project_page_2 *w2 = new Main_project_page_2;
    w2->show();
}

