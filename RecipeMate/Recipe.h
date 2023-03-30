#ifndef RECIPE_H
#define RECIPE_H
#include <vector>
#include <QString>
#include <QFile>
#include <QTextStream>

class Recipe
{
    QString name;
    std::vector<QString> ingredients;
    std::vector<QString> instructions;
public:
    Recipe(QString name, std::vector<QString> ingredients, std::vector<QString> instructions);
    Recipe(QString);
    void save();
    QString toString();
    QString getName();
    std::vector<QString> getIngredients();
    std::vector<QString> getInstructions();
};

#endif // RECIPE_H
