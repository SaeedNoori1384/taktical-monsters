#include "main_project_page_2.h"
#include "ui_main_project_page_2.h"
#include "main_project_page_3_1.h"
#include "main_project_page_3_2.h"

Main_project_page_2::Main_project_page_2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_project_page_2)
{
    ui->setupUi(this);
    QPixmap pix("D:/project/Main_project_page_1/page_2.png");
    ui->label->setPixmap(pix.scaled(2100,750 , Qt::KeepAspectRatio));
}

Main_project_page_2::~Main_project_page_2()
{
     delete ui;
}
// jfijfiejwfjieijfi
void Main_project_page_2::on_pushButton_clicked()
{
    Main_Project_page_3_1 *w3 = new Main_Project_page_3_1 ;
    w3->show();
}





void Main_project_page_2::on_pushButton_2_clicked()
{
    Main_project_page_3_2 *w4 = new Main_project_page_3_2 ;
    w4->show();
}

