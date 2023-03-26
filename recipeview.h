#ifndef RECIPEVIEW_H
#define RECIPEVIEW_H

#include <QMainWindow>

namespace Ui {
class RecipeView;
}

class RecipeView : public QMainWindow
{
    Q_OBJECT

public:
    explicit RecipeView(QWidget *parent = nullptr, QString keyword = "", bool vegan = false, bool vegetarian = false, bool glutenFree =  false);
    ~RecipeView();

private:
    Ui::RecipeView *ui;
};

#endif // RECIPEVIEW_H
