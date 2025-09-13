/*
Fig. 5.6: Interest.cpp
Compound-interest calculations with for.
*/
#include <iostream>
#include <math.h>
#include <iomanip>

#include <cstdint>

using namespace std;

int main() {
    const double principal = 1000.00;
    const double interestRate = 0.05;
    double deposit = 0;
    
    cout << fixed << setprecision(2);
    for (int i = 1; i <= 10; i++) {
        deposit = principal * pow((1 + interestRate), i);
        // cout << "The amount on deposit after " << i << " year(s) is " << fixed << setprecision(2) << deposit << endl;
        cout << "The amount on deposit after " << i << " year(s) is " << deposit << endl; 
    }
    
}
