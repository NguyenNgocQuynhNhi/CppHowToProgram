/*
4.33 (Sides of a Triangle) Write a program that reads three nonzero double values and deter
mines and prints whether they could represent the sides of a triangle.
*/

#include <iostream>

using namespace std;

int main() {
    double x, y, z;
    cout << "Enter x, y, z: " << endl;
    cin >> x >> y >> z;

    if (x + y > z && y + z > x && x + z > y) {
        cout << "x, y, z are 3 sides of a triangle." << endl;
    }
    else {
        cout << "x, y, z aren't 3 sides of a triangle." << endl;
    }

}