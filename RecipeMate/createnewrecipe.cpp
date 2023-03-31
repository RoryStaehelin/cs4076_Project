#include "createnewrecipe.h"
#include "ui_createnewrecipe.h"
#include "Recipe.h"
#include "comparetemplate.h"

namespace flagString
{
    QString flagTrue = "1";
    QString flagFalse = "0";
}

CreateNewRecipe::CreateNewRecipe() :
    QMainWindow(nullptr),
    ui(new Ui::CreateNewRecipe)
{
    ui->setupUi(this);
}

CreateNewRecipe::CreateNewRecipe(Recipe *recipe) :
    QMainWindow(nullptr),
    ui(new Ui::CreateNewRecipe)
{
    ui->setupUi(this);
    ui->RecipeName->setText(recipe->getName());
    std::vector ingredients = recipe->getIngredients();
    std::vector instructions = recipe->getInstructions();
    for (int i = 0; CompareTemplate::compare(i, (int)ingredients.size()); i++)
    {
        ui->Ingredients->addItem(ingredients[i]);
    }
    for (int i = 0; i < instructions.size(); i++)
    {
        ui->Instructions->addItem(instructions[i]);
    }
}

CreateNewRecipe::~CreateNewRecipe()
{
    delete ui;
}

void CreateNewRecipe::on_AddIngredientButton_clicked()
{
    ui->Ingredients->addItem(ui->AddIngredientBox->toPlainText());
    ui->AddIngredientBox->clear();
}


void CreateNewRecipe::on_AddInstructionButton_clicked()
{
    QString step = QString::number(ui->Instructions->count() + 1);
    ui->Instructions->addItem(step + ". " + ui->AddInstructionBox->toPlainText());
    ui->AddInstructionBox->clear();
}

void CreateNewRecipe::on_ExitNoSave_clicked()
{
    this->~CreateNewRecipe();
}

void CreateNewRecipe::on_Submit_clicked()
{
    QString name = ui->RecipeName->text();
    std::vector<QString> ingredients;
    std::vector<QString> instructions;
    for (int i = 0; i < ui->Ingredients->count(); i++)
    {
        ingredients.push_back(ui->Ingredients->item(i)->text());
    }
    for (int i = 0; i < ui->Instructions->count(); i++)
    {
        instructions.push_back(ui->Instructions->item(i)->text());
    }
    Recipe recipe = Recipe(name, ingredients, instructions);
    QString flags;
    if (ui->Vegan->isChecked())
    {
        flags.append(flagString::flagTrue);
    }
    else
    {
        flags.append(flagString::flagFalse);
    }
    if (ui->Vegetarian->isChecked())
    {
        flags.append(flagString::flagTrue);
    }
    else
    {
        flags.append(flagString::flagFalse);
    }
    if (ui->NutFree->isChecked())
    {
        flags.append(flagString::flagTrue);
    }
    else
    {
        flags.append(flagString::flagFalse);
    }
    if (ui->GlutenFree->isChecked())
    {
        flags.append(flagString::flagTrue);
    }
    else
    {
        flags.append(flagString::flagFalse);
    }
    recipe.setFlags(flags);
    recipe.save();
    this->deleteLater();
}

