#include <iostream>

using namespace std;

int main () {
    unsigned int counter = 1;
    int number;
    int firstLargest;
    int secondLargest;

    while (counter <= 10) {
        cin >> number;
        if (counter == 1) {
            firstLargest = number;
        }
        else {
            if (number > firstLargest) {
                secondLargest = firstLargest;
                firstLargest = number;
            }
        }
        counter++;
    }
    cout << "The largest number is " << firstLargest << endl;
    cout << "The second largest number is " << secondLargest << endl;
}