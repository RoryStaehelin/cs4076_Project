/********************************************************************************
** Form generated from reading UI file 'openrecipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENRECIPE_H
#define UI_OPENRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenRecipe
{
public:
    QWidget *centralwidget;
    QLineEdit *RecipeName;
    QPushButton *SearchButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *Vegan;
    QCheckBox *Vegetarian;
    QCheckBox *GlutenFree;
    QPushButton *ViewAllRecipesButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *OpenRecipe)
    {
        if (OpenRecipe->objectName().isEmpty())
            OpenRecipe->setObjectName("OpenRecipe");
        OpenRecipe->resize(575, 412);
        centralwidget = new QWidget(OpenRecipe);
        centralwidget->setObjectName("centralwidget");
        RecipeName = new QLineEdit(centralwidget);
        RecipeName->setObjectName("RecipeName");
        RecipeName->setGeometry(QRect(120, 80, 331, 24));
        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(370, 230, 80, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 140, 201, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Vegan = new QCheckBox(layoutWidget);
        buttonGroup = new QButtonGroup(OpenRecipe);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(Vegan);
        Vegan->setObjectName("Vegan");

        verticalLayout->addWidget(Vegan);

        Vegetarian = new QCheckBox(layoutWidget);
        buttonGroup->addButton(Vegetarian);
        Vegetarian->setObjectName("Vegetarian");

        verticalLayout->addWidget(Vegetarian);

        GlutenFree = new QCheckBox(layoutWidget);
        buttonGroup->addButton(GlutenFree);
        GlutenFree->setObjectName("GlutenFree");

        verticalLayout->addWidget(GlutenFree);

        ViewAllRecipesButton = new QPushButton(centralwidget);
        ViewAllRecipesButton->setObjectName("ViewAllRecipesButton");
        ViewAllRecipesButton->setGeometry(QRect(360, 290, 131, 51));
        OpenRecipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OpenRecipe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 575, 21));
        OpenRecipe->setMenuBar(menubar);
        statusbar = new QStatusBar(OpenRecipe);
        statusbar->setObjectName("statusbar");
        OpenRecipe->setStatusBar(statusbar);

        retranslateUi(OpenRecipe);

        QMetaObject::connectSlotsByName(OpenRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *OpenRecipe)
    {
        OpenRecipe->setWindowTitle(QCoreApplication::translate("OpenRecipe", "MainWindow", nullptr));
        RecipeName->setText(QCoreApplication::translate("OpenRecipe", "Recipe Name", nullptr));
        SearchButton->setText(QCoreApplication::translate("OpenRecipe", "Search", nullptr));
        Vegan->setText(QCoreApplication::translate("OpenRecipe", "Vegan", nullptr));
        Vegetarian->setText(QCoreApplication::translate("OpenRecipe", "Vegetarian", nullptr));
        GlutenFree->setText(QCoreApplication::translate("OpenRecipe", "Gluten-Free", nullptr));
        ViewAllRecipesButton->setText(QCoreApplication::translate("OpenRecipe", "View All Recipes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenRecipe: public Ui_OpenRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENRECIPE_H
