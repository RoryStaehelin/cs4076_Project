#include "showmultirecipe.h"
#include "ui_showmultirecipe.h"
#include "showsinglerecipe.h"
#include "openrecipe.h"

ShowMultiRecipe::ShowMultiRecipe(std::vector<Recipe> &recipes) :
    ui(new Ui::ShowMultiRecipe),
    recipes(recipes)
{
    ui->setupUi(this);
    for (int i = 0; i < recipes.size(); i++)
    {
        ui->listWidget->addItem(recipes[i].getName());
    }
    ui->RecipeNumLabel->setText("Found " + QString::number(recipeNum) + " Recipes");
    recipeNum = 0;
}

ShowMultiRecipe::~ShowMultiRecipe()
{
    delete ui;
    recipes.clear();
}

void ShowMultiRecipe::on_OpenRecipeButton_clicked()
{
    QString selectedRecipeName = ui->listWidget->selectedItems()[0]->text();
    int j;
    for (int i = 0; i < recipes.size(); i++)
    {
        if (selectedRecipeName == recipes[i].getName())
        {
            j = i;
        }
    }
    ShowSingleRecipe *ssrPtr = new ShowSingleRecipe(recipes[j]);
    ssrPtr->show();
    this->deleteLater();
}

void ShowMultiRecipe::on_BackButton_clicked()
{
    this->deleteLater();
}
