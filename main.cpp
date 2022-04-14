#include "mainwindow.h"

#include <QApplication>
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#include <QWebEngineView>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget *vbox = new QWidget();
    vbox->setWindowTitle("SkyBrowser");
    vbox->setGeometry(0, 0, 400, 400);
    QWebEngineView *view = new QWebEngineView(vbox);
    view->load(QUrl("https://yandex.ru"));
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setContentsMargins(0,0,0,0);
    layout->setSpacing(0);
    vbox->setLayout(layout);
    QLineEdit *lineedit = new QLineEdit();
    layout->addWidget(lineedit);
    QPushButton *ledButton = new QPushButton("Поиск");
    layout->addWidget(ledButton);
    layout->addWidget(view);
    vbox->show();
    return a.exec();
}
