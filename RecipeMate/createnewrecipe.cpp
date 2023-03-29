#include "createnewrecipe.h"
#include "ui_createnewrecipe.h"

CreateNewRecipe::CreateNewRecipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateNewRecipe)
{
    ui->setupUi(this);
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

}

