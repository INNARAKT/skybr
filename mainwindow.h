#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#include <QWebEngineView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

//signals:
    //void getHtml(QString html);

//private slots:
    //void onLoadFinished();
    //void handleHTML(QString html);

//void QLineEdit::onLoadFinished()
};
#endif // MAINWINDOW_H
