#ifndef MAIN_PROJECT_PAGE_2_H
#define MAIN_PROJECT_PAGE_2_H

#include <QMainWindow>

namespace Ui {
class Main_project_page_2;
}

class Main_project_page_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_project_page_2(QWidget *parent = nullptr);
    ~Main_project_page_2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Main_project_page_2 *ui;
};

#endif // MAIN_PROJECT_PAGE_2_H
