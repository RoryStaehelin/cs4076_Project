#ifndef CREATENEWRECIPE_H
#define CREATENEWRECIPE_H

#include <QMainWindow>

namespace Ui {
class CreateNewRecipe;
}

class CreateNewRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateNewRecipe(QWidget *parent = nullptr);
    ~CreateNewRecipe();

private slots:
    void on_AddIngredientButton_clicked();

    void on_AddInstructionButton_clicked();

    void on_ExitNoSave_clicked();

private:
    Ui::CreateNewRecipe *ui;
};

#endif // CREATENEWRECIPE_H
