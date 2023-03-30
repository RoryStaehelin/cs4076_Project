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
};

#endif // RECIPE_H
