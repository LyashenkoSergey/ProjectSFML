#include "bd.h"

BD::BD(std::string path)
{
    std::vector <std::string> buf;
    buf=getBd(path);
    this->bd=buf;

}


std::vector<std::string> getBd(std::string path) {
    std::ifstream in;
    in.open(path);
    if (in.is_open()) {
        std::vector<std::string> strComlite;
        std::string buf;
        while (getline(in, buf)) {
            std::string buf2;
            std::stringstream ssbuf(buf);
            while (getline(ssbuf, buf2, ';')) {
                strComlite.push_back(buf2);
            }

        }
        in.close();
        return strComlite;
    }
}
