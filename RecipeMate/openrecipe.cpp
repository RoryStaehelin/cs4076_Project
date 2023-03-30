#include "openrecipe.h"
#include "ui_openrecipe.h"
#include "Recipe.h"
#include "showmultirecipe.h"

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
    while (!stream.atEnd())
    {
        line = stream.readLine();
        if (line.indexOf("---") == 0)
        {
            if (!start && name.contains(filter))
            {
                recipes.push_back(Recipe(name, ingredients, instructions));
            }
            name = line.remove(0, 2);
            ingredients.clear();
            instructions.clear();
        }
        start = false;
    }
    ShowMultiRecipe *smrPtr = new ShowMultiRecipe(recipes);
    smrPtr->show();
}
