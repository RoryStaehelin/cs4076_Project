/********************************************************************************
** Form generated from reading UI file 'createnewrecipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWRECIPE_H
#define UI_CREATENEWRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewRecipe
{
public:
    QWidget *centralwidget;
    QLineEdit *RecipeName;
    QPlainTextEdit *AddIngredientBox;
    QListWidget *Instructions;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *Ingredients;
    QPlainTextEdit *AddInstructionBox;
    QPushButton *AddIngredientButton;
    QPushButton *AddInstructionButton;
    QPushButton *Submit;
    QPushButton *ExitNoSave;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateNewRecipe)
    {
        if (CreateNewRecipe->objectName().isEmpty())
            CreateNewRecipe->setObjectName("CreateNewRecipe");
        CreateNewRecipe->resize(1206, 681);
        centralwidget = new QWidget(CreateNewRecipe);
        centralwidget->setObjectName("centralwidget");
        RecipeName = new QLineEdit(centralwidget);
        RecipeName->setObjectName("RecipeName");
        RecipeName->setGeometry(QRect(50, 50, 111, 24));
        AddIngredientBox = new QPlainTextEdit(centralwidget);
        AddIngredientBox->setObjectName("AddIngredientBox");
        AddIngredientBox->setGeometry(QRect(50, 130, 321, 61));
        Instructions = new QListWidget(centralwidget);
        Instructions->setObjectName("Instructions");
        Instructions->setGeometry(QRect(750, 60, 421, 531));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 30, 141, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(750, 30, 111, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 100, 171, 16));
        Ingredients = new QListWidget(centralwidget);
        Ingredients->setObjectName("Ingredients");
        Ingredients->setGeometry(QRect(470, 60, 261, 531));
        AddInstructionBox = new QPlainTextEdit(centralwidget);
        AddInstructionBox->setObjectName("AddInstructionBox");
        AddInstructionBox->setGeometry(QRect(50, 300, 321, 211));
        AddIngredientButton = new QPushButton(centralwidget);
        AddIngredientButton->setObjectName("AddIngredientButton");
        AddIngredientButton->setGeometry(QRect(150, 210, 121, 24));
        AddInstructionButton = new QPushButton(centralwidget);
        AddInstructionButton->setObjectName("AddInstructionButton");
        AddInstructionButton->setGeometry(QRect(150, 540, 111, 24));
        Submit = new QPushButton(centralwidget);
        Submit->setObjectName("Submit");
        Submit->setGeometry(QRect(1050, 610, 80, 24));
        ExitNoSave = new QPushButton(centralwidget);
        ExitNoSave->setObjectName("ExitNoSave");
        ExitNoSave->setGeometry(QRect(899, 610, 121, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 280, 111, 16));
        CreateNewRecipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateNewRecipe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1206, 21));
        CreateNewRecipe->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateNewRecipe);
        statusbar->setObjectName("statusbar");
        CreateNewRecipe->setStatusBar(statusbar);

        retranslateUi(CreateNewRecipe);

        QMetaObject::connectSlotsByName(CreateNewRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *CreateNewRecipe)
    {
        CreateNewRecipe->setWindowTitle(QCoreApplication::translate("CreateNewRecipe", "MainWindow", nullptr));
        RecipeName->setText(QCoreApplication::translate("CreateNewRecipe", "Enter Recipe Name", nullptr));
        label->setText(QCoreApplication::translate("CreateNewRecipe", "Ingredients", nullptr));
        label_2->setText(QCoreApplication::translate("CreateNewRecipe", "Instructions", nullptr));
        label_3->setText(QCoreApplication::translate("CreateNewRecipe", "Add Ingredient:", nullptr));
        AddIngredientButton->setText(QCoreApplication::translate("CreateNewRecipe", "Add", nullptr));
        AddInstructionButton->setText(QCoreApplication::translate("CreateNewRecipe", "Add", nullptr));
        Submit->setText(QCoreApplication::translate("CreateNewRecipe", "Submit", nullptr));
        ExitNoSave->setText(QCoreApplication::translate("CreateNewRecipe", "Exit without Saving", nullptr));
        label_4->setText(QCoreApplication::translate("CreateNewRecipe", "Add Instruction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateNewRecipe: public Ui_CreateNewRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWRECIPE_H
