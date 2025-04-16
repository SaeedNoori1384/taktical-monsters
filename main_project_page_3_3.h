#ifndef MAIN_PROJECT_PAGE_3_3_H
#define MAIN_PROJECT_PAGE_3_3_H

#include <QMainWindow>

namespace Ui {
class Main_Project_page_3_3;
}

class Main_Project_page_3_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_Project_page_3_3(QWidget *parent = nullptr);
    ~Main_Project_page_3_3();

private:
    Ui::Main_Project_page_3_3 *ui;
};

#endif // MAIN_PROJECT_PAGE_3_3_H
