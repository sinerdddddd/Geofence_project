/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_image;
    QLabel *label_title;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(655, 425);
        login->setMinimumSize(QSize(655, 425));
        login->setMaximumSize(QSize(655, 425));
        login->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(login);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("\n"
"#widget{\n"
"font-size:15px;\n"
"font-style:MingLiU-ExtB;\n"
"background-image:url(\":/k.jpg\");\n"
"}\n"
"#widget_2{\n"
"background-color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"QFrame{\n"
"border:sold 10px rgba(0,0,0);\n"
"\n"
"}\n"
"QLineEdit{\n"
"color:white;\n"
"background-color:#405361;\n"
"font-size:18px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(224,0,0);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QCheckBox{\n"
"background:rgba(85,170,255,0);\n"
"color:white;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QLabel{\n"
"background:rgba(85,170,255,0);\n"
"color:white;\n"
"font-style:MingLiU-ExtB;\n"
"font-size:20px;\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 205, 81, 20));
        username = new QLineEdit(widget);
        username->setObjectName("username");
        username->setGeometry(QRect(170, 200, 191, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 245, 61, 21));
        password = new QLineEdit(widget);
        password->setObjectName("password");
        password->setGeometry(QRect(170, 240, 191, 31));
        password->setEchoMode(QLineEdit::EchoMode::PasswordEchoOnEdit);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 280, 75, 23));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 280, 75, 23));
        label_image = new QLabel(widget);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(80, 70, 441, 61));
        label_title = new QLabel(widget);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(80, 130, 341, 61));
        label_title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background:rgba(85,170,255,0);\n"
"font-style:MingLiU-ExtB;\n"
"font-size:30px;\n"
"color:white\n"
"}"));
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(widget);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        label->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        label_image->setText(QString());
        label_title->setText(QCoreApplication::translate("login", "\347\237\277\347\224\250\347\224\265\345\255\220\345\233\264\346\240\217\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
