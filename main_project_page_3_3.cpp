#include "main_project_page_3_3.h"
#include "ui_main_project_page_3_3.h"

Main_Project_page_3_3::Main_Project_page_3_3(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_Project_page_3_3)
{
    ui->setupUi(this);
}

Main_Project_page_3_3::~Main_Project_page_3_3()
{
    delete ui;
}
