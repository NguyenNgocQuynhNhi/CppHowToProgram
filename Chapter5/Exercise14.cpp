/*
 5.14 (Modified Compound-Interest Program) Modify the compound-interest application of
 Fig.5.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9% and 10%. Use a for loop to
 vary the interest rate.
*/
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    double principal = 1000.00;
    double interestRate = 0.05;

    cout << "Initial principal: " << principal << endl;
    // cout << "Interest rate:     " << interestRate << endl;

    cout << "\nYear" << setw(20) << "Amount on deposit" << setw(20) << "Interest Rate" <<endl;
    
    for (double rate = interestRate; rate <= 0.1; rate += 0.01) {
        for (unsigned int year{1}; year <= 10; year++) {
            double amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(20) << amount << setw(20) << rate <<endl;
        }
    }
}