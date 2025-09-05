#include <string>
#include <iostream>

class Account{
public:
    Account (std::string accountName, int firstBalance)
        : name{accountName} {
        if (firstBalance > 0) {
            balance = firstBalance;
        }
        
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {return name;}

    int getBalance() const {return balance;}

    void depositBalance(int depositBalance) {
        if (depositBalance > 0) {
            balance = balance + depositBalance;
        }
    }
    
    void withdraw(int withdrawal) {
        if (withdrawal > 0 && withdrawal <= balance) {
            balance = balance - withdrawal;
        }
        else {
            std::cout << "Withdrawal amount exceeded account balance." << std::endl;
        }
    }
private:
    std::string name;
    int balance{0};

};