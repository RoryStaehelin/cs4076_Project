#include "importrecipe.h"
#include "ui_importrecipe.h"
#include "Recipe.h"

ImportRecipe::ImportRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImportRecipe)
{
    ui->setupUi(this);
}

ImportRecipe::~ImportRecipe()
{
    delete ui;
}

void ImportRecipe::on_pushButton_clicked()
{
    Recipe recipe = Recipe(ui->ImportBox->toPlainText());
    recipe.save();
    this->~ImportRecipe();
}
