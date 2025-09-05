#include <iostream>

using namespace std;

int main() {
    cout << "Enter the size of a square: size = ";
    unsigned int size;
    cin >> size;

    unsigned int row{1};
    unsigned int column;
    
    while (row <= size) {
        column = 1;
        if (row == 1 || row == size) {
            while (column <= size) {
                cout << "*";
                column = column + 1;
            }
        }
        else {
            while (column <= size) {
                //cout << "*";
                if (column >= 2 && column <= size - 1) {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
                column = column + 1;
            }
        }
        cout << endl;
        row = row + 1;
    }
}