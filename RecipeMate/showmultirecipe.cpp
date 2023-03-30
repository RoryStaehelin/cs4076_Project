#include "showmultirecipe.h"
#include "ui_showmultirecipe.h"

ShowMultiRecipe::ShowMultiRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShowMultiRecipe)
{
    ui->setupUi(this);
}

ShowMultiRecipe::~ShowMultiRecipe()
{
    delete ui;
}
