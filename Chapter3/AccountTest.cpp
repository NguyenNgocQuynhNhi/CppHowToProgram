#include <string>
#include <iostream>
#include "AccountTest.h"

using namespace std;

void displayAccount(Account accountToDisplay) {
    cout << accountToDisplay.getName() << "'s balance is: " << accountToDisplay.getBalance() << " dong."<< endl;
}

int main() {
    Account myAccount1("Nhi", 200000);
    Account myAccount2("Bun", -100000);

    // cout << "account1: " << myAccount1.getName() << "'s balance is " << myAccount1.getBalance() << " dong." <<endl;
    // cout << "account2: " << myAccount2.getName() << "'s balance is " << myAccount2.getBalance() << " dong." <<endl;
    displayAccount(myAccount1);
    displayAccount(myAccount2);

    cout << "Enter deposit amount for account1: ";
    int deposit1;
    cin >> deposit1;
    cout << "adding " << deposit1 << " to account1 balance" << endl;
    myAccount1.depositBalance(deposit1);
    // cout << "account1: " << myAccount1.getName() << "'s balance is " << myAccount1.getBalance() << " dong." <<endl;
    // cout << "account2: " << myAccount2.getName() << "'s balance is " << myAccount2.getBalance() << " dong." <<endl;
    displayAccount(myAccount1);
    displayAccount(myAccount2);

    cout << "Enter deposit amount for account2: ";
    int deposit2;
    cin >> deposit2;
    cout << "adding " << deposit2 << " to account2 balance" << endl;
    myAccount2.depositBalance(deposit2);
    // cout << "account1: " << myAccount1.getName() << "'s balance is " << myAccount1.getBalance() << " dong." <<endl;
    // cout << "account2: " << myAccount2.getName() << "'s balance is " << myAccount2.getBalance() << " dong." <<endl;
    displayAccount(myAccount1);
    displayAccount(myAccount2);

    cout << "Enter withdrawal amount for account1: ";
    int withdrawal1;
    cin >> withdrawal1;
    cout << "withdrawing " << withdrawal1 << " from account1 balance" << endl;
    myAccount1.withdraw(withdrawal1);

    cout << "Enter withdrawal amount for account2: ";
    int withdrawal2;
    cin >> withdrawal2;
    cout << "withdrawing " << withdrawal2 << " from account2 balance" << endl;
    myAccount2.withdraw(withdrawal2);

    // cout << "account1: " << myAccount1.getName() << "'s balance is " << myAccount1.getBalance() << " dong." <<endl;
    // cout << "account2: " << myAccount2.getName() << "'s balance is " << myAccount2.getBalance() << " dong." <<endl;
    displayAccount(myAccount1);
    displayAccount(myAccount2);


}