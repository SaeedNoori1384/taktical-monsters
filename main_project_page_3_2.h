#ifndef MAIN_PROJECT_PAGE_3_2_H
#define MAIN_PROJECT_PAGE_3_2_H

#include <QMainWindow>

namespace Ui {
class Main_project_page_3_2;
}

class Main_project_page_3_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_project_page_3_2(QWidget *parent = nullptr);
    ~Main_project_page_3_2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Main_project_page_3_2 *ui;
};

#endif // MAIN_PROJECT_PAGE_3_2_H
