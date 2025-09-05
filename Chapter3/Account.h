#include <string>

class Account
{
private:
    std::string name;
    int balance{0};
public:
    void setName(std::string AccountName) {
        name = AccountName;
    }
    std::string getName() const {
        return name;
    }
    void setBalance(int initialBalance) {
        if (initialBalance > 0)
        {
            balance = initialBalance;
        }
    }
    int getBalance() const {
        return balance;
    }
};
