#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
public:
    string address;
    string description;
    House();
    House(string address, string description);
    int addressLength();
    void printInfo();
};

#endif