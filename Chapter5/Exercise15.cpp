/*
 5.15 (Triangle-Printing Program) Write an application that displays the following patterns sep
arately, one below the other. Use for loops to generate the patterns. All asterisks (*) should be print
ed by a single statement of the form cout << '*'; which causes the asterisks to print side by side. A
 statement of the form cout << '\n'; can be used to move to the next line. A statement of the form
 cout << ' '; can be used to display a space for the last two patterns. There should be no other output
 statements in the program. [Hint: The last two patterns require that each line begin with an appro
priate number of blank spaces.] 
(a) (b) (c) (d)
 * ********** **********         *
 ** ********* *********        **
 *** ********  ********       ***
 **** *******   *******      ****
 ***** ******    ******     *****
 ****** *****     *****    ******
 ******* ****      ****   *******
 ******** ***       ***  ********
 ********* **        ** *********
 ********** *         * **********
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // cout << "a)" << setw(15) << "b)" << setw(15) << "c)" << setw(15) << "d)" <<endl;
    cout << "a)" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    cout << "b)" << endl;
    for (int i = 10; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << '*';
        }
        cout << '\n';
    }

    cout << "c)" << endl;
    for (int i = 10; i >= 1; i--) {
        int spacesN = 10 - i;
        // if (spacesN >= 1) {
        //     for (int k = 1; k <= spacesN; k++) {
        //         cout << ' ';
        //     }
        // }
        for (int k = 1; k <= spacesN; k++) {
            cout << ' ';
        }
        for (int j = i; j >= 1; j--) {
            cout << '*';
        }
        cout << '\n';
    }

    cout << "d)" << endl;
    for (int i = 1; i <= 10; i++) {
        int spacesN = 10 - i;
        for (int k = 1; k <= spacesN; k++) {
            cout << ' ';
        }

        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}