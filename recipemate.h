#ifndef RECIPEMATE_H
#define RECIPEMATE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RecipeMate; }
QT_END_NAMESPACE

class RecipeMate : public QMainWindow
{
    Q_OBJECT

public:
    RecipeMate(QWidget *parent = nullptr);
    ~RecipeMate();

private slots:
    void on_getRecipesButton_clicked();

private:
    Ui::RecipeMate *ui;
};
#endif // RECIPEMATE_H
