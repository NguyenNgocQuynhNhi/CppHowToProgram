#include <iostream>

using namespace std;

int main() {
    // unsigned int var{10};
    // unsigned int number;
    // unsigned int x{0};
    
    // while (x <= 10) {
    //     number = var - x;
    //     x++;
    //     cout << number << endl;
    // }

    // cout << "x = " << x << endl;

    unsigned int var{10};
    unsigned int x{0};

    while (x <= 10) {
        cout << var << endl;
        var--;
        x++;
    }

    cout << "x = " << x << endl;

    // --------- Solution in textbook is wrong!!!! --------------
    // long var = 10;
    // long x = 0;

    // while (x <= 10) {
    //     var -= x;
    //     ++x;
    //     cout << var << endl;
    // }
    // --------- Solution in textbook is wrong!!!! --------------
}