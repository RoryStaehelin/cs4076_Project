#ifndef SHOWSINGLERECIPE_H
#define SHOWSINGLERECIPE_H

#include <QMainWindow>
#include "Recipe.h"

namespace Ui {
class ShowSingleRecipe;
}

class ShowSingleRecipe : public QMainWindow
{
    Q_OBJECT

public:
    ShowSingleRecipe(Recipe *recipe);
    ~ShowSingleRecipe();

private:
    Ui::ShowSingleRecipe *ui;
};

#endif // SHOWSINGLERECIPE_H
