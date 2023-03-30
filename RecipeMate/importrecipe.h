#ifndef IMPORTRECIPE_H
#define IMPORTRECIPE_H

#include <QMainWindow>

namespace Ui {
class ImportRecipe;
}

class ImportRecipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImportRecipe(QWidget *parent = nullptr);
    ~ImportRecipe();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ImportRecipe *ui;
};

#endif // IMPORTRECIPE_H
