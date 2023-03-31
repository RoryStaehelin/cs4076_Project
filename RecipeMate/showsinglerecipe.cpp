#include "showsinglerecipe.h"
#include "ui_showsinglerecipe.h"
#include "Recipe.h"
#include "createnewrecipe.h"


ShowSingleRecipe::ShowSingleRecipe(Recipe recipe) :
    recipe(recipe),
    QMainWindow(nullptr),
    ui(new Ui::ShowSingleRecipe)
{
    ui->setupUi(this);
    ui->RecipeNameLabel->setText(recipe.getName());
    std::vector ingredients = recipe.getIngredients();
    std::vector instructions = recipe.getInstructions();
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


void ShowSingleRecipe::on_CloseButton_clicked()
{
    this->deleteLater();
}

void ShowSingleRecipe::on_DeleteButton_clicked()
{
    this->deleteRecipe();
    this->deleteLater();
}

void ShowSingleRecipe::deleteRecipe()
{
    QFile file = QFile("recipes.txt");
    file.open(QIODeviceBase::ReadWrite);
    QTextStream stream = QTextStream(&file);
    QString line;
    QString newString;
    bool addLine = true;
    while (!stream.atEnd())
    {
        line = stream.readLine();
        if (line.indexOf("---") == 0)
        {
            if(recipe.getName() == line.remove(0, 3))
            {
                addLine = false;
            }
            else
            {
                addLine = true;
                newString.append("---").append(line).append("\n");
            }
        }
        else if(addLine)
        {
            newString.append(line).append("\n");
        }
    }
    file.resize(0);
    stream << newString;
    file.close();
}


void ShowSingleRecipe::on_EditButton_clicked()
{
    this->deleteRecipe();
    CreateNewRecipe *cnr = new CreateNewRecipe(&recipe);
    cnr->show();
    this->deleteLater();
}

