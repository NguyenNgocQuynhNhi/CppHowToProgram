/* 
(Checkerboard Pattern of Asterisks) Write a program that displays the following checker
board pattern. Your program must use only three output statements, one of each of the following
 forms:
 cout << "* "; 
cout << ' '; 
cout << endl;
*/

#include <iostream>

using namespace std;

int main() {
    unsigned int row = 8;
    unsigned int col = 16;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            // if (j % 2 != 0) {
            //     cout << "*";
            // }
            // else {
            //     cout << " ";
            // }

            if (i % 2 != 0) {
                if (j % 2 != 0) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            else {
                if (j % 2 != 0) {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}