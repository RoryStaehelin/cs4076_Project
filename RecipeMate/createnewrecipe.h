#ifndef CREATENEWRECIPE_H
#define CREATENEWRECIPE_H

#include <QMainWindow>
#include <vector>
#include "Recipe.h"


namespace Ui {
class CreateNewRecipe;
}

class CreateNewRecipe : public QMainWindow
{
    Q_OBJECT
public:
    CreateNewRecipe();
    CreateNewRecipe(Recipe *recipe);
    ~CreateNewRecipe();

private slots:
    void on_AddIngredientButton_clicked();

    void on_AddInstructionButton_clicked();

    void on_ExitNoSave_clicked();

    void on_Submit_clicked();

private:
    Ui::CreateNewRecipe *ui;
};

#endif // CREATENEWRECIPE_H
