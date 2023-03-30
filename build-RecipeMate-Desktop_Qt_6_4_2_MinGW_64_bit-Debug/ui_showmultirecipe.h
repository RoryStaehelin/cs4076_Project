/********************************************************************************
** Form generated from reading UI file 'showmultirecipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMULTIRECIPE_H
#define UI_SHOWMULTIRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowMultiRecipe
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *OpenRecipeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShowMultiRecipe)
    {
        if (ShowMultiRecipe->objectName().isEmpty())
            ShowMultiRecipe->setObjectName("ShowMultiRecipe");
        ShowMultiRecipe->resize(800, 600);
        centralwidget = new QWidget(ShowMultiRecipe);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(150, 80, 451, 351));
        listWidget->setSelectionRectVisible(true);
        OpenRecipeButton = new QPushButton(centralwidget);
        OpenRecipeButton->setObjectName("OpenRecipeButton");
        OpenRecipeButton->setGeometry(QRect(340, 470, 80, 24));
        ShowMultiRecipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShowMultiRecipe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ShowMultiRecipe->setMenuBar(menubar);
        statusbar = new QStatusBar(ShowMultiRecipe);
        statusbar->setObjectName("statusbar");
        ShowMultiRecipe->setStatusBar(statusbar);

        retranslateUi(ShowMultiRecipe);

        QMetaObject::connectSlotsByName(ShowMultiRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *ShowMultiRecipe)
    {
        ShowMultiRecipe->setWindowTitle(QCoreApplication::translate("ShowMultiRecipe", "MainWindow", nullptr));
        OpenRecipeButton->setText(QCoreApplication::translate("ShowMultiRecipe", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMultiRecipe: public Ui_ShowMultiRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMULTIRECIPE_H
