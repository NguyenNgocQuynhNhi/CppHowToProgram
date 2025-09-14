/*
 5.16 (Bar-Chart Printing Program) One interesting application of computers is to display graphs
 and bar charts. Write an application that reads five counter between 1 and 9. For each number that’s
 read, your program should display a double row of the same number repeated as many times as the
 number read. For example, if your program reads the number 7, it should display 7777777 followed
 by 7777777 on the next line. Display the bars of counter after you read all five counter.
*/
#include <iostream>

using namespace std;

int main() {
    const unsigned int counter = 5;
    unsigned int numbers_arr[counter];
    unsigned int value;
    unsigned int i = 0;
    do
    {
        cout << "Enter a number between 1 and 9: ";
        cin >> value;
        if (value < 1 || value > 9) {
            cout << "The number must be betwwen 1 and 9, please enter again: ";
        }
        else {
            numbers_arr[i] = value;
            i++;
        }
    } while (i < counter);

    cout << endl << "The bar-chart: " << endl;
    for (int i = 0; i < counter; i++) {
        // cout << "5 numbers are: ";
        // cout << numbers_arr[i] << ' ';
        // cout << endl << "The bar-chart: " << endl;
        for (int j = 0; j < numbers_arr[i]; j++) {
            cout << numbers_arr[i];
        }
        cout << endl;
    }
    
    
}