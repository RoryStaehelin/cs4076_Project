/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *CreateNewRecipeButton;
    QPushButton *OpenRecipeButton;
    QPushButton *ImportRecipeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(805, 520);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CreateNewRecipeButton = new QPushButton(centralwidget);
        CreateNewRecipeButton->setObjectName("CreateNewRecipeButton");
        CreateNewRecipeButton->setGeometry(QRect(40, 30, 361, 441));
        OpenRecipeButton = new QPushButton(centralwidget);
        OpenRecipeButton->setObjectName("OpenRecipeButton");
        OpenRecipeButton->setGeometry(QRect(470, 30, 291, 311));
        ImportRecipeButton = new QPushButton(centralwidget);
        ImportRecipeButton->setObjectName("ImportRecipeButton");
        ImportRecipeButton->setGeometry(QRect(470, 360, 291, 111));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 805, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CreateNewRecipeButton->setText(QCoreApplication::translate("MainWindow", "Create New Recipe", nullptr));
        OpenRecipeButton->setText(QCoreApplication::translate("MainWindow", "Open Recipe", nullptr));
        ImportRecipeButton->setText(QCoreApplication::translate("MainWindow", "Import Recipe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
