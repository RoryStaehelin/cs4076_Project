#include "openrecipe.h"
#include "ui_openrecipe.h"

OpenRecipe::OpenRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OpenRecipe)
{
    ui->setupUi(this);
}

OpenRecipe::~OpenRecipe()
{
    delete ui;
}

void OpenRecipe::on_ViewAllRecipesButton_clicked()
{

}


void OpenRecipe::on_SearchButton_clicked()
{

}
