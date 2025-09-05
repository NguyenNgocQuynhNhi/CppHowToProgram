#include <iostream>
#include <cmath>

using namespace std;

bool Palindrome(int number, unsigned int NumberDigits) {
    unsigned int remainder;
    unsigned int integerPart; 
    //unsigned int counter{NumberDigits};

    while (number != 0) {
        remainder = number % 10;
        // if (counter == NumberDigits) {
        //     integerPart = number / pow(10, counter - 1);
        // }
        // else {
        //     integerPart = number / pow(10, counter - 2);
        // }
        integerPart = number / pow(10, NumberDigits - 1);
        
        cout << "The integer part is: " << integerPart << "\nThe remainder is: " << remainder << endl;
        if (remainder != integerPart) {
            // check = false;
            // break;
            return false;
        }
        
        // if (counter == NumberDigits) {
        //     number = number - integerPart * pow(10, counter - 1);
        // }
        // else {
        //     number = number - integerPart * pow(10, counter - 2);
        // }
        number = number - integerPart * pow(10, NumberDigits - 1);
        number = number / 10;
        if (NumberDigits > 1) {
            NumberDigits = NumberDigits - 2; 
        }
        cout << "The number now is: " << number << endl;
        cout << "The number of digits of this number now is: " << NumberDigits << endl;
        //counter = counter - 1;
    }
    return true;
}

unsigned int NumberDigits(int number) {
    unsigned int digits{0};
    while (number != 0) {
        number = number / 10;
        digits = digits + 1;
    }
    return digits;
}

int main() {
    cout << "Enter an integer: ";
    int number;
    cin >> number;
    unsigned int digits;
    digits = NumberDigits(number);

    cout << "The number of digits of this number is: " << NumberDigits(number) << endl;
    if (Palindrome(number, digits)) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }

}