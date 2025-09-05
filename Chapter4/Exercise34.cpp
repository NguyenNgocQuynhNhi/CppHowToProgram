/* 
4.34 (Sides of a Right Triangle) Write a program that reads three nonzero integers and deter
mines and prints whether they’re the sides of a right triangle.
*/

#include <iostream>

using namespace std;

int main() {
    // unsigned int a, b, c;
    int a, b, c;

    do
    {
        /* code */
        cout << "Enter a, b, c: " << endl;
        cin >> a >> b >> c;
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    } while (!(a > 0 && b > 0 && c > 0));
    
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        cout << "A right triangle." << endl;
    }
    else {
        cout << "Not a right triangle." << endl;
    }
}