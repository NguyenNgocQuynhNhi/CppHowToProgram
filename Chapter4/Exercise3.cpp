#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 3;
    int z;
    cout << "Before being postdecremented, x = " << x << endl;
    z = x-- * y;
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;

    while (z >= 10) {
        z--;
    }
    cout << "z = " << z << endl;
    cout << "z is less than 10" << endl;

    int total{0};
    total += ++x;
    cout << "total = " << total << endl;
    cout << "x = " << x << endl;

    int q{10};
    q /= 2;
    cout << "q = " << q << endl;
    q = q / 5;
    cout << "q = " << q << endl;
}