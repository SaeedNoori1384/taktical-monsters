#include "main_project_page_3_1.h"
#include "ui_main_project_page_3_1.h"

Main_Project_page_3_1::Main_Project_page_3_1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_Project_page_3_1)
{
    ui->setupUi(this);
}

Main_Project_page_3_1::~Main_Project_page_3_1()
{
    delete ui;
}
