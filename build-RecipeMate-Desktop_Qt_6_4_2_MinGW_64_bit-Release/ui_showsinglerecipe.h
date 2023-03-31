/********************************************************************************
** Form generated from reading UI file 'showsinglerecipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWSINGLERECIPE_H
#define UI_SHOWSINGLERECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowSingleRecipe
{
public:
    QWidget *centralwidget;
    QLabel *RecipeNameLabel;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *CloseButton;
    QPushButton *EditButton;
    QListWidget *Ingredients;
    QListWidget *Instructions;
    QPushButton *DeleteButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShowSingleRecipe)
    {
        if (ShowSingleRecipe->objectName().isEmpty())
            ShowSingleRecipe->setObjectName("ShowSingleRecipe");
        ShowSingleRecipe->resize(800, 600);
        centralwidget = new QWidget(ShowSingleRecipe);
        centralwidget->setObjectName("centralwidget");
        RecipeNameLabel = new QLabel(centralwidget);
        RecipeNameLabel->setObjectName("RecipeNameLabel");
        RecipeNameLabel->setGeometry(QRect(130, 70, 141, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 160, 81, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 160, 111, 16));
        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName("CloseButton");
        CloseButton->setGeometry(QRect(660, 510, 80, 24));
        EditButton = new QPushButton(centralwidget);
        EditButton->setObjectName("EditButton");
        EditButton->setGeometry(QRect(550, 510, 80, 24));
        Ingredients = new QListWidget(centralwidget);
        Ingredients->setObjectName("Ingredients");
        Ingredients->setGeometry(QRect(50, 200, 331, 331));
        Instructions = new QListWidget(centralwidget);
        Instructions->setObjectName("Instructions");
        Instructions->setGeometry(QRect(410, 200, 361, 281));
        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(440, 510, 80, 24));
        ShowSingleRecipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShowSingleRecipe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ShowSingleRecipe->setMenuBar(menubar);
        statusbar = new QStatusBar(ShowSingleRecipe);
        statusbar->setObjectName("statusbar");
        ShowSingleRecipe->setStatusBar(statusbar);

        retranslateUi(ShowSingleRecipe);

        QMetaObject::connectSlotsByName(ShowSingleRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *ShowSingleRecipe)
    {
        ShowSingleRecipe->setWindowTitle(QCoreApplication::translate("ShowSingleRecipe", "MainWindow", nullptr));
        RecipeNameLabel->setText(QCoreApplication::translate("ShowSingleRecipe", "Recipe Name", nullptr));
        label_2->setText(QCoreApplication::translate("ShowSingleRecipe", "Ingredients", nullptr));
        label_3->setText(QCoreApplication::translate("ShowSingleRecipe", "Instructions", nullptr));
        CloseButton->setText(QCoreApplication::translate("ShowSingleRecipe", "Close", nullptr));
        EditButton->setText(QCoreApplication::translate("ShowSingleRecipe", "Edit", nullptr));
        DeleteButton->setText(QCoreApplication::translate("ShowSingleRecipe", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowSingleRecipe: public Ui_ShowSingleRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSINGLERECIPE_H
