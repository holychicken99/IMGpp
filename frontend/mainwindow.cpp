#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<main.hpp>
#include<QFileDialog>
#include<QDir>
#include<QtDebug>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QPixmap pix("/home/alpha/Documents/projects/CPP_ImageApp/boost_fileviewer/frontend/assets/balcony.png");
    QPixmap pix("/home/alpha/Documents/customization/wallpapers/balcony.png");
    ui->label1->setPixmap(pix);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{ /*char arr[900];
    QPixmap pix(arr);*/



 }


    void MainWindow::on_actionopen_triggered()
    {
        QString filter="PNG File (*.png)";
        QString File = QFileDialog::getOpenFileName(this,"open image",QDir::homePath(),filter);
        std::string path=File.toStdString(); // \represents the path to file
        this->img.add_path(path);


    }

