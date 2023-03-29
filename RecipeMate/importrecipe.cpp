#include "importrecipe.h"
#include "ui_importrecipe.h"

ImportRecipe::ImportRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImportRecipe)
{
    ui->setupUi(this);
}

ImportRecipe::~ImportRecipe()
{
    delete ui;
}
