#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter a five-digit integer: ";
    int number;
    cin >> number;
    unsigned int remainder;
    unsigned int integerPart; 
    bool check = true;
    unsigned int counter{5};

    while (number >= 10) {
        remainder = number % 10;
        if (counter == 5) {
            integerPart = number / pow(10, counter - 1);
        }
        else {
            integerPart = number / pow(10, counter - 2);
        }
        
        cout << "The integer part is: " << integerPart << "\nThe remainder is: " << remainder << endl;
        if (remainder != integerPart) {
            check = false;
            break;
        }
        
        if (counter == 5) {
            number = number - integerPart * pow(10, counter - 1);
        }
        else {
            number = number - integerPart * pow(10, counter - 2);
        }
        
        number = number / 10;
        cout << "The number now is: " << number << endl;
        counter = counter - 1;
    }

    if (check) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }

}