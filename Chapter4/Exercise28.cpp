#include <iostream>

using namespace std;

int main() {
    cout << "Enter a binary number: ";
    unsigned int binaryNumber;
    cin >> binaryNumber;

    unsigned int integer{0};
    unsigned int powerOfTwo{1};

    while (binaryNumber > 0) {
        if ((binaryNumber % 10) == 1) {
            integer += (binaryNumber % 10) * powerOfTwo;
        }
        
        //powerOfTwo *= 2;
        powerOfTwo <<= 1;  // <=> powerOfTwo *= 2;
        binaryNumber /= 10;
    }

    cout << "The integer is: " << integer << endl;
}