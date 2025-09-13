/*
 5.13 (Factorials) Factorials are used frequently in probability problems. The factorial of a positive
 integer n (written n! and pronounced “n factorial”) is equal to the product of the positive integers from
 1 to n. Write an application that calculates the factorials of 1 through 20. Use type long. Display the
 results in tabular format. What difficulty might prevent you from calculating the factorial of 100?
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n = 100;
    long long factorials = 1;
    for (long long i = 1; i <= n; i++) {
        factorials *= i;
    }
    cout << "the factorials of 1 through " << n << " is " << left << setw(10) << factorials << endl;

    // cout << sizeof(long) << endl;
    // cout << sizeof(long long) << endl;
}