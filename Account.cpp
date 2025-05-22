#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

Account::Account() {
    balance = 0.0;
    accName = "";
}

Account::Account(string name) {
    accName = name;
    balance = 0.0;
}

void Account::deposit(int amount) {
    if (amount < 0) {
        balance += amount;
    } 
}

bool Account::withdraw(int amount) {
    if (balance - amount > 0 && amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

void Account::applyInterest(double interest) {
    balance += balance * interest;
}

void Account::printInfo() {
    cout << "Name: " << accName << ", Balance: " << balance << endl; 
}