#include "Recipe.h"

Recipe::Recipe(QString name, std::vector<QString> ingredients, std::vector<QString> instructions)
    : name(name), ingredients(ingredients), instructions(instructions)
{

}

Recipe::Recipe(QString string)
{
    QStringList list = string.split("\n");
    name = list[0];
    int i = 2;
    for (; list[i] != "Instructions"; i++)
    {
        ingredients.push_back(list[i]);
    }
    for (i++; i < list.size(); i++)
    {
        instructions.push_back(list[i]);
    }
}

void Recipe::save()
{
    QString recipeString = this->toString();
    QFile file = QFile("recipes.txt");
    file.open(QIODeviceBase::Append);
    QTextStream stream = QTextStream(&file);
    stream << recipeString;
    file.close();
}

QString Recipe::toString()
{
    QString recipeString;
    recipeString.append("---" + name + "\nIngredients\n");
    for (int i = 0; i < ingredients.size(); i++)
    {
        recipeString.append(ingredients.at(i) + "\n");
    }
    recipeString.append("Instructions\n");
    for (int i = 0; i < instructions.size(); i++)
    {
        recipeString.append(instructions.at(i) + "\n");
    }
    return recipeString;
}

QString Recipe::getName()
{
    return name;
}
std::vector<QString> Recipe::getIngredients()
{
    return ingredients;
}
std::vector<QString> Recipe::getInstructions()
{
    return instructions;
}
