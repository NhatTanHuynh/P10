// Variables/state
#include <string>
#include <iostream>
#include "House.h"
using namespace std;

House::House() {
    address = "56 Totallybelievablestreetname";
    description = "blue";
}

House::House(string address, string description) {
    this->address = address;
    this->description = description;
}

int House::addressLength() {
    return address.length();
}

void House::printInfo() {
    cout << "The house at" << address << " is " << description << "." << endl;
}