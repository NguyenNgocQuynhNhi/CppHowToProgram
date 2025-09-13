/*
(Find the Smallest Value) Write an application that finds the smallest of several integers.
Assume that the first value read specifies the number of values to input from the user.
*/
#include <iostream>

using namespace std;

int main() {
    cout << "Please enter the number of values: ";
    int N;
    cin >> N;
    // cout << endl;
    cout << "Please enter " << N << " values: ";
    int values_arr[N];
    for (int i = 0; i < N; i++) {
        cin >> values_arr[i];
    }

    for (int i = 0; i < N; i++) {
        cout << values_arr[i] << " ";
    }
    cout << endl;

    int smallest;
    smallest = values_arr[0];
    // cout << smallest << endl;
    // cout << values_arr[0] << endl;
    for (int i = 0; i < N; i++) {
        if (values_arr[i] <= smallest) {
            smallest = values_arr[i];
        }
    }
    cout << "The smallest number is: " << smallest << endl;


}