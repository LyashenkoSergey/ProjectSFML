#include "flat.h"

Flat::Flat(QString name, QString area, int numOfRooms, int price, QString description)
{
    this->name=name;
    this->area=area;
    this->numOfRooms=numOfRooms;
    this->price=price;
    this->date=time();
    this->descriptions=description;
}

QString Flat::getName()
{
    return name;
}

QString Flat::getArea()
{
    return area;
}

int Flat::getNumOfRooms()
{
    return numOfRooms;
}

int Flat::getPrice()
{
    return price;
}

time_t Flat::getDate()
{
    return date;
}

QString Flat::getDescriptions()
{
    return descriptions;
}

int time()
{
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);
    return end_time;
}


