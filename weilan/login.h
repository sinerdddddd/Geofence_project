#ifndef LOGIN_H
#define LOGIN_H
#include "mainwindow.h"
#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::login *ui;
    MainWindow *mainwindow;
};

#endif // LOGIN_H
