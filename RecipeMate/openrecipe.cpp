#include "openrecipe.h"
#include "ui_openrecipe.h"
#include "Recipe.h"
#include "showmultirecipe.h"

int recipeNum = 0;

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

void OpenRecipe::on_ViewAllRecipesButton_clicked()
{
    showRecipes("");
}

void OpenRecipe::on_SearchButton_clicked()
{
    showRecipes(ui->RecipeName->text());
}

void OpenRecipe::showRecipes(QString filter)
{
    QFile file = QFile("recipes.txt");
    file.open(QIODeviceBase::ReadOnly);
    QTextStream stream = QTextStream(&file);
    QString line;
    QString name;
    std::vector<QString> ingredients;
    std::vector<QString> instructions;
    bool start = true;
    bool addIngredient = false;
    bool addInstruction = false;
    while (!stream.atEnd())
    {
        line = stream.readLine();
        if (line.indexOf("---") == 0)
        {
            if (!start && name.contains(filter))
            {
                recipes.push_back(Recipe(name, ingredients, instructions));
                recipeNum++;
            }
            name = line.remove(0, 3);
            ingredients.clear();
            instructions.clear();
            addInstruction = false;
        }
        if (line == "Ingredients")
        {
            addIngredient = true;
        }
        else if (line == "Instructions")
        {
            addIngredient = false;
            addInstruction = true;
        }
        else if (addIngredient)
        {
            ingredients.push_back(line);
        }
        else if (addInstruction)
        {
            instructions.push_back(line);
        }
        start = false;
    }
    recipes.push_back(Recipe(name, ingredients, instructions));
    recipeNum++;
    ShowMultiRecipe *smrPtr = new ShowMultiRecipe(recipes);
    smrPtr->show();
}
