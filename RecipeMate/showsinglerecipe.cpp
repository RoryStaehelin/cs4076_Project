#include "showsinglerecipe.h"
#include "ui_showsinglerecipe.h"
#include "Recipe.h"


ShowSingleRecipe::ShowSingleRecipe(Recipe *recipe) :
    QMainWindow(nullptr),
    ui(new Ui::ShowSingleRecipe)
{
    ui->setupUi(this);
    ui->RecipeNameLabel->setText(recipe->getName());
    std::vector ingredients = recipe->getIngredients();
    std::vector instructions = recipe->getInstructions();
    for (int i = 0; i < ingredients.size(); i++)
    {
        ui->Ingredients->addItem(ingredients[i]);
    }
    for (int i = 0; i < instructions.size(); i++)
    {
        ui->Instructions->addItem(instructions[i]);
    }
}

ShowSingleRecipe::~ShowSingleRecipe()
{
    delete ui;
}
