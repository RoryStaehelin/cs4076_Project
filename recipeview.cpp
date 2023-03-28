#include "recipeview.h"
#include "qnetworkaccessmanager.h"
#include <QNetworkReply>
#include "ui_recipeview.h"
#include <QThread>

RecipeView::RecipeView(QWidget *parent, QByteArray keyword, bool vegan, bool vegetarian, bool glutenFree) :

    QMainWindow(parent),
    ui(new Ui::RecipeView)
{
    ui->setupUi(this);
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QNetworkRequest request;
    request.setUrl(QUrl("https://api.edamam.com/api/recipes/v2"));
    request.setRawHeader("q", keyword);
    request.setRawHeader("app_id", "3ca40690");
    request.setRawHeader("app_key", "708244b89f10907f7a35c280a651af11");
    request.setRawHeader("random", "true");
    QNetworkReply *reply = manager->get(request);
    QThread::sleep(20);
    QString replyString = reply->readAll();
    ui->plainTextEdit->setPlainText(replyString);
    delete manager;
}


RecipeView::~RecipeView()
{
    delete ui;
}
