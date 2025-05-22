#include <iostream>
#include "Bank.h"
#include <string>
using namespace std;

Bank::Bank() {
    capacity = 0;
    numAccounts = 0;
    accounts = nullptr;
}

Bank::Bank(int accCapacity) {
    capacity = accCapacity;
    numAccounts = 0;
    accounts = new Account*[capacity];
}

void Bank::addAccount(Account* acc) {
    if (numAccounts < capacity) {
        accounts[numAccounts] = acc;
        numAccounts++;
    }
}

Account** Bank::getAccounts() {
    return accounts;
}

int Bank::getNumAccounts() {
    return numAccounts;
}

void Bank::applyInterestAll(double interest) {
    for (int i = 0; i < numAccounts; i++) {
        accounts[i]->applyInterest(interest);
    }
}