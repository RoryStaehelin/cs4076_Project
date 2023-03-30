#ifndef SHOWSINGLERECIPE_H
#define SHOWSINGLERECIPE_H

#include <QMainWindow>

namespace Ui {
class ShowSingleRecipe;
}

class ShowSingleRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShowSingleRecipe(QWidget *parent = nullptr);
    ~ShowSingleRecipe();

private:
    Ui::ShowSingleRecipe *ui;
};

#endif // SHOWSINGLERECIPE_H
