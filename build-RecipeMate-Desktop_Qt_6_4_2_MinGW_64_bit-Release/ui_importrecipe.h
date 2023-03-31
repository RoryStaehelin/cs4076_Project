/********************************************************************************
** Form generated from reading UI file 'importrecipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTRECIPE_H
#define UI_IMPORTRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportRecipe
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *ImportBox;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ImportRecipe)
    {
        if (ImportRecipe->objectName().isEmpty())
            ImportRecipe->setObjectName("ImportRecipe");
        ImportRecipe->resize(800, 600);
        centralwidget = new QWidget(ImportRecipe);
        centralwidget->setObjectName("centralwidget");
        ImportBox = new QPlainTextEdit(centralwidget);
        ImportBox->setObjectName("ImportBox");
        ImportBox->setGeometry(QRect(130, 110, 521, 361));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 80, 151, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 500, 80, 24));
        ImportRecipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImportRecipe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ImportRecipe->setMenuBar(menubar);
        statusbar = new QStatusBar(ImportRecipe);
        statusbar->setObjectName("statusbar");
        ImportRecipe->setStatusBar(statusbar);

        retranslateUi(ImportRecipe);

        QMetaObject::connectSlotsByName(ImportRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *ImportRecipe)
    {
        ImportRecipe->setWindowTitle(QCoreApplication::translate("ImportRecipe", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ImportRecipe", "Paste Import String here", nullptr));
        pushButton->setText(QCoreApplication::translate("ImportRecipe", "Import", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportRecipe: public Ui_ImportRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTRECIPE_H
