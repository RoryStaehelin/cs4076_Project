#include "createnewrecipe.h"
#include "ui_createnewrecipe.h"

CreateNewRecipe::CreateNewRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateNewRecipe)
{
    ui->setupUi(this);
}

CreateNewRecipe::~CreateNewRecipe()
{
    delete ui;
}
