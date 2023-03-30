#include "showsinglerecipe.h"
#include "ui_showsinglerecipe.h"

ShowSingleRecipe::ShowSingleRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShowSingleRecipe)
{
    ui->setupUi(this);
}

ShowSingleRecipe::~ShowSingleRecipe()
{
    delete ui;
}
