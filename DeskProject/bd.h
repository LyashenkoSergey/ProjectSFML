#pragma once
#include <vector>
#include <fstream>
#include <sstream>
#include <string>





std::vector<std::string> getBd();

class BD
{
private:
    std::vector<std::string> bd;

public:
    BD(std::string path);

};


