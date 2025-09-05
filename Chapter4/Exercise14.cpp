#include <iostream>

using namespace std;

int main() {
    unsigned int accNum;
    double balance;
    double charge;
    double credit;
    double creditLimit;
    double newBalance;
    
    while (1) {
        cout << "Enter account number (or -1 to quit): ";
        cin >> accNum;
        if (accNum == -1) {break;}
        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charge;
        cout << "Enter total credits: ";
        cin >> credit;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newBalance = balance + charge - credit;
        cout << "New balance is: " << newBalance << endl;

        if (newBalance > creditLimit) {
            cout << "Account        : " << accNum << endl;
            cout << "Credit limit   : " << creditLimit << endl;
            cout << "Balance        : " << newBalance << endl;
            cout << "Credit Limit Exceeded" << endl;
        }
        cout << endl;
    }
}