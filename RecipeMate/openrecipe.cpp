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
