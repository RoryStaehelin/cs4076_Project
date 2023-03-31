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
    Recipe recipe;
public:
    ShowSingleRecipe(Recipe recipe);
    ~ShowSingleRecipe();
    void deleteRecipe();

private slots:
    void on_CloseButton_clicked();

    void on_DeleteButton_clicked();

    void on_EditButton_clicked();

private:
    Ui::ShowSingleRecipe *ui;
};

#endif // SHOWSINGLERECIPE_H
