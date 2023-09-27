#pragma once
#include<QString>
#include <chrono>


class Flat
{
private:
    QString name;
    QString area;
    int numOfRooms;
    int price;
    time_t date;
    QString descriptions;

public:
    Flat(QString name, QString area, int numOfRooms, int price, QString description);
    QString getName();
    QString getArea();
    int getNumOfRooms();
    int getPrice();
    time_t getDate();
    QString getDescriptions();

};

int time();

