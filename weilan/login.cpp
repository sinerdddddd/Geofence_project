#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include "mainwindow.h"
#include <QGraphicsDropShadowEffect>
login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    // //设置图片
    QPixmap *pix = new QPixmap(":/b.png");
    QSize sz = ui->label_image->size();
    ui->label_image->setPixmap(pix->scaled(sz));

    //设置图片阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(-3, 0);
    shadow->setColor(QColor("#888888"));
    shadow->setBlurRadius(30);
    ui->label_image->setGraphicsEffect(shadow);

}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString name = ui->password->text();
    QString password = ui->username->text();

    if (name.compare("") == 0 && password.compare("") == 0 )
    {
        mainwindow = new MainWindow();
        mainwindow->show();
        this->hide();
    }
    else

    if (name == "")
    {
        QMessageBox::information(this,"提示","请输入用户名！");
        ui->password->setFocus();
    }
    else
        if(password == ""){
            QMessageBox::information(this,"提示","请输入密码！");
            ui->username->setFocus();
        }
        else
        {
            QMessageBox::warning(this,"错误提示","用户名或密码错误");
            ui->password->clear();
            ui->username->clear();
            ui->password->setFocus();
        }

}


void login::on_pushButton_2_clicked()
{
    close();
}

