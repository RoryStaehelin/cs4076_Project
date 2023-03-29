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

private:
    Ui::CreateNewRecipe *ui;
};

#endif // CREATENEWRECIPE_H
