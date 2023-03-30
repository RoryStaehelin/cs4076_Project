#ifndef SHOWMULTIRECIPE_H
#define SHOWMULTIRECIPE_H

#include <QMainWindow>
#include <vector>
#include "Recipe.h"

namespace Ui {
class ShowMultiRecipe;
}

class ShowMultiRecipe : public QMainWindow
{
    Q_OBJECT
    std::vector<Recipe> &recipes;
    int selected;
public:
    ShowMultiRecipe(std::vector<Recipe> &recipes);
    ~ShowMultiRecipe();

private slots:
    void on_OpenRecipeButton_clicked();

private:
    Ui::ShowMultiRecipe *ui;
};

#endif // SHOWMULTIRECIPE_H
