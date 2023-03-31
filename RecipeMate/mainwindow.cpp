#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createnewrecipe.h"
#include "openrecipe.h"
#include "importrecipe.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateNewRecipeButton_clicked()
{
    CreateNewRecipe *cnr = new CreateNewRecipe();
    cnr->show();
}

void MainWindow::on_OpenRecipeButton_clicked()
{
    OpenRecipe *openr = new OpenRecipe(this);
    openr->show();
}


void MainWindow::on_ImportRecipeButton_clicked()
{
    ImportRecipe *ir = new ImportRecipe(this);
    ir->show();
}

