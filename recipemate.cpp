#include "recipemate.h"
#include "recipeview.h"
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


void RecipeMate::on_getRecipesButton_clicked()
{
    QString keyword = ui->Keyword->text();
    bool vegan = ui->Vegan->isChecked();
    bool vegetarian = ui->Vegetarian->isChecked();
    bool glutenFree = ui->GlutenFree->isChecked();
    RecipeView *rv = new RecipeView(this, keyword, vegan, vegetarian, glutenFree);
    rv->show();
}
