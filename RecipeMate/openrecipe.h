#ifndef OPENRECIPE_H
#define OPENRECIPE_H

#include <QMainWindow>
#include <vector>
#include <QString>
#include <QFile>
#include <QTextStream>
#include "Recipe.h"

namespace Ui {
class OpenRecipe;
}

class OpenRecipe : public QMainWindow
{
    Q_OBJECT
    std::vector<Recipe> recipes;
public:
    explicit OpenRecipe(QWidget *parent = nullptr);
    ~OpenRecipe();

private slots:
    void on_ViewAllRecipesButton_clicked();

    void on_SearchButton_clicked();


private:
    Ui::OpenRecipe *ui;
    void showRecipes(QString filter);
};

#endif // OPENRECIPE_H
