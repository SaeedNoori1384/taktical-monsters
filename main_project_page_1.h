#ifndef MAIN_PROJECT_PAGE_1_H
#define MAIN_PROJECT_PAGE_1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Main_project_page_1;
}
QT_END_NAMESPACE

class Main_project_page_1 : public QMainWindow
{
    Q_OBJECT

public:
    Main_project_page_1(QWidget *parent = nullptr);
    ~Main_project_page_1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Main_project_page_1 *ui;
};
#endif // MAIN_PROJECT_PAGE_1_H
