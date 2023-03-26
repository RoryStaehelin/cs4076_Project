#include "recipeview.h"
#include "ui_recipeview.h"


RecipeView::RecipeView(QWidget *parent, QString keyword, bool vegan, bool vegetarian, bool glutenFree) :

    QMainWindow(parent),
    ui(new Ui::RecipeView)
{
    ui->setupUi(this);
}


RecipeView::~RecipeView()
{
    delete ui;
}
