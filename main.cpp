#include "recipemate.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RecipeMate w;
    w.show();
    return a.exec();
}
