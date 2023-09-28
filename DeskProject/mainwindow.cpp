#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listTable->clear();
    updateTable(BD bd("bd.txt"));






};

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateLists(std::vector<std::string> bd)
{


}

void MainWindow::updateTable(BD bd)
{
    ui->filter_Area->clear();
    ui->filter_numOfRooms->clear();
    ui->filter_Price->clear();
    ui->filter_Area->addItem("Все");
    ui->filter_numOfRooms->addItem("Все");
    ui->filter_Price->addItem("Все");
    ui->listTable->clear();
    ui->checkSortPrice->setChecked(false);
    ui->checkSortArea->setChecked(false);
    ui->checkSortNumOfRooms->setChecked(false);
    ui->checkSortTime->setChecked(false);
}







