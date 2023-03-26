#include "recipemate.h"
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RecipeMate w;
    cURLpp::initialize(CURL_GLOBAL_ALL);
    cURLpp::Easy EasyHandle;
    w.show();
    return a.exec();
}
