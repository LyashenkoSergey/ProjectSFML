#pragma once

#include <QMainWindow>
#include <malloc/_malloc.h>
#include "flat.h"
#include "bd.h"



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
    void updateLists(std::vector<std::string> bd);
    void updateTable(std::vector<std::string> bd);

    void setFlat(std::vector<Flat> flatArray);


private:
    Ui::MainWindow *ui;
    std::vector<Flat> flatArray;
    BD bd;

};



