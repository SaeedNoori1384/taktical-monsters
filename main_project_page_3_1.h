#ifndef MAIN_PROJECT_PAGE_3_1_H
#define MAIN_PROJECT_PAGE_3_1_H

#include <QMainWindow>

namespace Ui {
class Main_Project_page_3_1;
}

class Main_Project_page_3_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_Project_page_3_1(QWidget *parent = nullptr);
    ~Main_Project_page_3_1();

private:
    Ui::Main_Project_page_3_1 *ui;
};

#endif // MAIN_PROJECT_PAGE_3_1_H
