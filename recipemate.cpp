#include "recipemate.h"
#include "ui_recipemate.h"

RecipeMate::RecipeMate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RecipeMate)
{
    ui->setupUi(this);
}

RecipeMate::~RecipeMate()
{
    delete ui;
}

