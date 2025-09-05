#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//     a)  Declare a built-in array of type double called numbers with 10 elements, and initialize
//  the elements to the values 0.0, 1.1, 2.2, …, 9.9. Assume that the constant size has
//  been defined as 10.
    const unsigned int size{10};
    double numbers[size]{0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    //  b) Declare a pointer nPtr that points to a variable of type double.
    double* nPtr{NULL};

//     c) Use a for statement to display the elements of built-in array numbers using array sub
// script notation. Display each number with one digit to the right of the decimal point.
    for (int i = 0; i < size; i++) {
        cout << setprecision(1) << fixed << numbers[i] << '\t';
    }

//     d) Write two separate statements that each assign the starting address of built-in array num
// bers to the pointer variable nPtr. 
    cout << "\nThe starting address of built-in array numbers is: " << numbers << endl;
    //nPtr = numbers;
    nPtr = &numbers[0]; // <=> nPtr = numbers;
    cout << "The address of nPtr is: " << nPtr << endl;

//     e) Use a for statement to display the elements of built-in array numbers using pointer/off
// set notation with pointer nPtr.
    for (int i = 0; i < size; i++) {
        cout << *(nPtr + i) << '\t';
    }

//     f) Use a for statement to display the elements of built-in array numbers using pointer/off
// set notation with the built-in array’s name as the pointer.
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << *(numbers + i) << '\t';
    }

//      g) Use a for statement to display the elements of built-in array numbers using pointer/sub
// script notation with pointer nPtr.
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << nPtr[i] << '\t';
    }

//     h) Refer to the fourth element of built-in array numbers using array subscript notation,
//  pointer/offset notation with the built-in array’s name as the pointer, pointer subscript
//  notation with nPtr and pointer/offset notation with nPtr.
    cout << endl;
    cout << "----------using array subscipt notation------------" << endl;
    cout << "The fourth element in built-in array is: " << numbers[3] << endl;
    cout << "----------using pointer/offset notation with the built-in array’s name as the pointer------------------" << endl;
    cout << "The fourth element in built-in array is: " << *(numbers + 3) << endl;
    cout << "----------using pointer subscript notation with nPtr------------" << endl;
    cout << "The fourth element in built-in array is: " << nPtr[3] << endl;
    cout << "----------using pointer/offset notation with nPtr------------" << endl;
    cout << "The fourth element in built-in array is: " << *(nPtr + 3) << endl;
    
//     i)
//  Assuming that nPtr points to the beginning of built-in array numbers, what address is
//  referenced by nPtr + 8? What value is stored at that location?

    // cout << "SAIII: The address of the second element is: " << &numbers[1] << endl;
    // cout << "The address referenced by nPtr + 8 is: " << nPtr + 8 << endl;
    cout << "The value stored at that location is: " << *(nPtr + 8) << endl;
}