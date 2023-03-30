#ifndef SHOWMULTIRECIPE_H
#define SHOWMULTIRECIPE_H

#include <QMainWindow>

namespace Ui {
class ShowMultiRecipe;
}

class ShowMultiRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShowMultiRecipe(QWidget *parent = nullptr);
    ~ShowMultiRecipe();

private:
    Ui::ShowMultiRecipe *ui;
};

#endif // SHOWMULTIRECIPE_H
