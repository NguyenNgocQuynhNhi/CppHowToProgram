/* 
5.12 (Calculating the Product of the Multiples of 3) Write an application that calculates the
product of the multiples of 3 in the range 3 to 50.
*/

#include <iostream>

using namespace std;

int main() {
    unsigned int product = 1;
    for (unsigned int i = 3; i <= 50; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            product *= i;
        }
    }
    cout << endl << "the product of the multiples of 3 in the range 3 to 50 is " << product << endl;
}