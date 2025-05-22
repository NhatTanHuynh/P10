#ifndef Bank_H
#define Bank_H
#include "Account.h"

#include <string>

class Bank {
private:   // Variables, all should be private
    int capacity;
    int numAccounts;                          // Number of current accounts held by bank
    Account** accounts;                       // Pointer to array of Accounts

public:
// Constructors
    Bank();
    Bank(int accCapacity);

// Methods
    void addAccount(Account* acc);            // Add passed account to accounts array if room left
    Account** getAccounts();                  // Return accounts
    int getNumAccounts();
    void applyInterestAll(double interest);
};





#endif