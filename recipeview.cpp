#include "recipeview.h"
#include "qnetworkaccessmanager.h"
#include "ui_recipeview.h"

RecipeView::RecipeView(QWidget *parent, QString keyword, bool vegan, bool vegetarian, bool glutenFree) :

    QMainWindow(parent),
    ui(new Ui::RecipeView)
{
    ui->setupUi(this);
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QNetworkRequest request;
}


RecipeView::~RecipeView()
{
    delete ui;
}
