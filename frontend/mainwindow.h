#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <main.hpp>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionopen_triggered();

private:
    Ui::MainWindow *ui;
    imgViewer img;
    std::string path;

};
#endif // MAINWINDOW_H
