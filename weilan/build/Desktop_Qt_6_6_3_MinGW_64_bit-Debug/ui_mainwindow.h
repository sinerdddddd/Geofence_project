/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action66666;
    QAction *action5555555;
    QAction *action444444;
    QAction *action666666;
    QAction *action555555;
    QAction *action44444;
    QAction *action66666_2;
    QAction *action55555;
    QAction *action44444_2;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1308, 532);
        action66666 = new QAction(MainWindow);
        action66666->setObjectName("action66666");
        action5555555 = new QAction(MainWindow);
        action5555555->setObjectName("action5555555");
        action444444 = new QAction(MainWindow);
        action444444->setObjectName("action444444");
        action666666 = new QAction(MainWindow);
        action666666->setObjectName("action666666");
        action555555 = new QAction(MainWindow);
        action555555->setObjectName("action555555");
        action44444 = new QAction(MainWindow);
        action44444->setObjectName("action44444");
        action66666_2 = new QAction(MainWindow);
        action66666_2->setObjectName("action66666_2");
        action55555 = new QAction(MainWindow);
        action55555->setObjectName("action55555");
        action44444_2 = new QAction(MainWindow);
        action44444_2->setObjectName("action44444_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 310, 241, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 10, 69, 19));
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(10, 110, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1308, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(2259, 104, 120, 134));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButton, listView);
        QWidget::setTabOrder(listView, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action66666);
        menu->addSeparator();
        menu->addAction(action5555555);
        menu->addSeparator();
        menu->addAction(action444444);
        menu_2->addAction(action666666);
        menu_2->addSeparator();
        menu_2->addAction(action555555);
        menu_2->addSeparator();
        menu_2->addAction(action44444);
        menu_3->addAction(action66666_2);
        menu_3->addSeparator();
        menu_3->addAction(action44444_2);
        menu_3->addSeparator();
        menu_3->addAction(action55555);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action66666->setText(QCoreApplication::translate("MainWindow", "66666", nullptr));
        action5555555->setText(QCoreApplication::translate("MainWindow", "5555555", nullptr));
        action444444->setText(QCoreApplication::translate("MainWindow", "444444", nullptr));
        action666666->setText(QCoreApplication::translate("MainWindow", "666666.", nullptr));
        action555555->setText(QCoreApplication::translate("MainWindow", "555555", nullptr));
        action44444->setText(QCoreApplication::translate("MainWindow", "44444", nullptr));
        action66666_2->setText(QCoreApplication::translate("MainWindow", "66666", nullptr));
        action55555->setText(QCoreApplication::translate("MainWindow", "55555", nullptr));
        action44444_2->setText(QCoreApplication::translate("MainWindow", "44444", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\230\262\345\214\272\357\274\232", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\351\230\262\345\214\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
