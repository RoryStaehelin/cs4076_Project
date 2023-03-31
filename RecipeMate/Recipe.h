#ifndef RECIPE_H
#define RECIPE_H

#include <vector>
#include <QString>
#include <QFile>
#include <QTextStream>

class Data
{
protected:
    Data(QString name) :
        name(name){}
    Data(){}
    QString name;
    virtual QString toString() = 0;
};

class privateInheritance
{
    int a;
    QString string;
};

class Recipe : public Data, private privateInheritance
{
    std::vector<QString> ingredients;
    std::vector<QString> instructions;
public:
    Recipe(QString name, std::vector<QString> ingredients, std::vector<QString> instructions);
    Recipe(QString);
    Recipe(const Recipe &obj);
    void save();
    QString toString() override;
    QString getName() const;
    void setName(QString name);
    std::vector<QString> getIngredients() const;
    std::vector<QString> getInstructions() const;
    void setFlags(QString flags);
    bool vegan:1;
    bool vegetarian:1;
    bool nutFree:1;
    bool glutenFree:1;
};

#endif // RECIPE_H
