#include <iostream>
//#include <cmath>

using namespace std;

bool Palindrome(int number) {
    int reversedNumber = 0;
    int originalNumber = number;

    while (number > 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    cout << "Enter an integer: ";
    int number;
    cin >> number;

    if (Palindrome(number)) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }
}
