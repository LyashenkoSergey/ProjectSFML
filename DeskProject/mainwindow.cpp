#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listTable->clear();






}

MainWindow::~MainWindow()
{
    delete ui;
}



std::vector<std::string> bd=split("bd.txt");

