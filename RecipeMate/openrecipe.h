#ifndef OPENRECIPE_H
#define OPENRECIPE_H

#include <QMainWindow>

namespace Ui {
class OpenRecipe;
}

class OpenRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit OpenRecipe(QWidget *parent = nullptr);
    ~OpenRecipe();

private:
    Ui::OpenRecipe *ui;
};

#endif // OPENRECIPE_H
