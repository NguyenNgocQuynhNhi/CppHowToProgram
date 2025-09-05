#include <string>
#include <iostream>

class Account {
private: 
    std::string name;
    int balance{0};
public:
    Account(std::string accountName, int initialBalance) : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }
    void setName(const std::string accountName) {
        name = accountName;
    }
    std::string getName() const { return name; }
    void setBalance(int initialBalance) {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }
    int getBalance() const { return balance; }
    void setDeposit(int deposit) {
        if (deposit > 0) {
            balance = balance + deposit;
        }
    }
    void withdraw(int withdrawal) {
        if (withdrawal > 0 && withdrawal < balance) {
            balance = balance - withdrawal;
        }
        else {
            std::cout << "WARNING: withdrawal is negative or exceeds balance" << std::endl;
        }
    }
};