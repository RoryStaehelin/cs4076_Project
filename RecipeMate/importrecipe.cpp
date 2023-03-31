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
    QString name = recipe.getName();
    if (name.indexOf("---") == 0)
    {
        recipe.setName(name.remove(0, 3));
    }
    recipe.save();
    this->deleteLater();
}
