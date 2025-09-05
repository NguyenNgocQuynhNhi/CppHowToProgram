#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account1;
    account1.setName("John");
    cout << account1.getName() << endl;
    account1.setBalance(100000);
    cout << account1.getBalance() << endl;
    Account account2;
    account2.setName("Mike");
    cout << account2.getName() << endl;
    account2.setBalance(-4);
    cout << account2.getBalance() << endl;
    cout << "Enter the third account's name: ";
    string accountName3;
    getline(cin, accountName3);
    cout << "Enter the third account's initial balance:";
    int initialBalance3{0};
    cin >> initialBalance3;
    Account account3;
    account3.setName(accountName3);
    account3.setBalance(initialBalance3);
    cout << "The third account is " << account3.getName() << ", whose balance is " << account3.getBalance() << endl;

}