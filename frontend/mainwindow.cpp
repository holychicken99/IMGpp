#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<main.hpp>
#include<QFileDialog>
#include<QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{



}


void MainWindow::on_actionopen_triggered()
{
    QString filter="PNG File (*.png)";
    QString File = QFileDialog::getOpenFileName(this,"open image",QDir::homePath(),filter);
std::string path=File.toStdString();
this->img.add_path(path);




}

