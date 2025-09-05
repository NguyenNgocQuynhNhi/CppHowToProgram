#include <iostream>

using namespace std;

int main () {
    unsigned int counter{1};
    int number;
    int largest;

    while (counter <= 10) {
        cout << "Enter number: ";
        cin >> number;
        if (counter == 1) {
            largest = number;
        }
        else {
            if (number > largest) {
                largest = number;
            }
        }
        counter++;
    }
    cout << "The largest number is " << largest << endl;
    cout << "The counter now is " << counter << endl;
}