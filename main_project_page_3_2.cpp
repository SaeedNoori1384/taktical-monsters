#include "main_project_page_3_2.h"
#include "ui_main_project_page_3_2.h"
#include "main_project_page_3_3.h"

Main_project_page_3_2::Main_project_page_3_2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_project_page_3_2)
{
    ui->setupUi(this);
}

Main_project_page_3_2::~Main_project_page_3_2()
{
    delete ui;
}

void Main_project_page_3_2::on_pushButton_clicked()
{
    Main_Project_page_3_3 *w4 = new Main_Project_page_3_3;
    w4->show();
}

