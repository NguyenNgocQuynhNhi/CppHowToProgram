#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    unsigned int sum = 0;
    for (unsigned int count = 1; count <= 99; count++) {
        if (count % 2 != 0) {
            // cout << "count = " << count << endl;
            sum += count;
        }
    }
    cout << "The sum of the odd integers between 1 and 99 is " << sum << endl;

    double value = 333.546372;
    cout << left << setw(15) << fixed;
    // cout << setw(15) << fixed << setprecision(1) << value << endl;
    // cout << setw(15) << fixed << setprecision(2) << value << endl;
    // cout << setw(15) << fixed << setprecision(3) << value << endl;
    cout << setprecision(1) << value << setprecision(2) << left << setw(15) << value << setprecision(3) << left << setw(15) << value << endl;

    double value2 = 2.5;
    double value2Pow = pow(value2, 3);
    cout << value2Pow << endl;
    cout << setw(10) << setprecision(2) << fixed << value2Pow << endl;
    cout << fixed << setprecision(2) << setw(10) << value2Pow << endl;

    unsigned int dCounter = 1;
    while (dCounter <= 20) {
        cout << dCounter;
        if (dCounter % 5 == 0) {
            cout << endl;
        }
        else {
            cout << "   ";
        }
        dCounter++;
    }
    cout << endl;

    for (unsigned int dCounter = 1; dCounter <= 20; dCounter++) {
        cout << dCounter;
        if (dCounter % 5 == 0) {
            cout << endl;
        }
        else {
            cout << "   ";
        }
    }
}