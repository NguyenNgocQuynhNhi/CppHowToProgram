#include <string>
#include <iostream>
#include "AccountConstructor.h"

using namespace std;

int main() {
    Account myAccount1{"Bun", 100000};
    cout << "My first account is " << myAccount1.getName() << endl;
    cout << "My first account has " << myAccount1.getBalance() << " dong" <<endl;
    cout << "Enter the amount of money you want to deposit: ";
    int deposit{0};
    cin >> deposit;
    //cout << "dong" <<endl;
    myAccount1.setDeposit(deposit);
    cout << "The balance of my first account after depositing is " << myAccount1.getBalance() << " dong" << endl;
    cout << "Enter the account name you want to change: ";
    string accountName;
    cin.ignore(1,' ');
    getline(cin, accountName);
    cout << "accountName = " << accountName << endl;
    myAccount1.setName(accountName);
    cout << "My first account is " << myAccount1.getName() << endl;
    myAccount1.setBalance(200000);
    cout << "The balance of my first account is: " << myAccount1.getBalance() << endl;
    int withdrawal;
    cout << "Enter the amount of money you want to withdraw: ";
    cin >> withdrawal;
    myAccount1.withdraw(withdrawal);
    cout << "The balance of my first account after withdrawing is: " << myAccount1.getBalance() << endl;
}