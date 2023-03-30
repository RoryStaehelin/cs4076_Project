#include "showmultirecipe.h"
#include "ui_showmultirecipe.h"
#include "showsinglerecipe.h"

ShowMultiRecipe::ShowMultiRecipe(std::vector<Recipe> &recipes) :
    ui(new Ui::ShowMultiRecipe),
    recipes(recipes)
{
    ui->setupUi(this);
    for (int i = 0; i < recipes.size(); i++)
    {
        ui->listWidget->addItem(recipes[i].getName());
    }
}

ShowMultiRecipe::~ShowMultiRecipe()
{
    delete ui;
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
    Recipe selectedRecipe = recipes[j];
    Recipe *selectedRecipePtr = &selectedRecipe;
    ShowSingleRecipe *ssrPtr = new ShowSingleRecipe(selectedRecipePtr);
    ssrPtr->show();
    this->~ShowMultiRecipe();
}
