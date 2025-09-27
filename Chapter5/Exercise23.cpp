/*
 5.23 (Egg-timer Program) Write an application that prints the following egg-timer shape. You
 may use output statements that print a single asterisk (*), a single hash (#) a single space or a single
 newline character. Maximize your use of iteration (with nested for statements), and minimize the
 number of output statements.

  #########
  #*******#
  # ***** #
  #  ***  #
  #   *   #  
  #  ***  #
  # ***** #
  #*******#
  #########

*/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    unsigned int height = 9;
    unsigned int asterisk_size = height - 2;

    for (int i = 0; i < height; i++) {
        if (i == 0 || i == height - 1) {
            for (int j = 0; j < height; j++) {
                cout << '#';
            }
        }
        else {
            cout << '#';

            int spacesN = min(i, (int)asterisk_size - 1 - i);
            for (int space = 0; space < spacesN; space++) {
                cout << ' ';
            }

            unsigned int asterisksN = height - spacesN * 2;
            for (int asterisk = 0; asterisk < asterisksN; asterisk++) {
                cout << '*';
            }

            for (int space = 0; space < spacesN; space++) {
                cout << ' ';
            }

            cout << '#';
        }

        cout << '\n';
    }

    // for (int i = 0; i < height; i++) {
    //     if (i == 0 || i == height - 1) {
    //         for (int j = 0; j < height; j++) {
    //             cout << '#';
    //         }
    //     }
    //     else {
    //         for (int j = 0; j < height; j++) {
    //             // if (j > 0 && j < height - 1) {
    //             //     cout << ' ';
    //             // }
    //             // else {
    //             //     cout << '#';
    //             // }

    //             if (j == 0 || j == height - 1) {
    //                 cout << '#';
    //             }
    //             else {
    //                 if (i > 1 && i < height - 1) {

    //                 }
    //                 cout << '*';
    //             }
    //         }
    //     }
    //     cout << '\n';  
    // }
}