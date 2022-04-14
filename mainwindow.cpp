#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect( &QWebEngineView::loadFinished, this, &WebDialog::onLoadFinished);
    //connect(this, &WebDialog::getHtml, this, &WebDialog::handleHTML);
}
MainWindow::~MainWindow()
{
    delete ui;
}

