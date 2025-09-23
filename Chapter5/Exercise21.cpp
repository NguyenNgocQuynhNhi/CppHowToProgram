/*
5.21 (Modified Triangle-Printing Program) Modify Exercise5.15 to combine your code from
 the four separate triangles of asterisks such that all four patterns print side by side. [Hint: Make clev
er use of nested for loops.]
*/
#include <iostream>

using namespace std;

int main() {
    const int size = 10;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        
        int spacesN1 = size - i;
        for (int space1 = 1; space1 <= spacesN1; space1++) {
            cout << ' ';
        }

        int asterisksN2 = spacesN1 + 1;
        for (int k = asterisksN2; k >= 1; k--) {
            cout << '*';
        }

        int spacesN2 = size - asterisksN2;
        for (int space2 = 1; space2 <= spacesN2; space2++) {
            cout << ' ';
            cout << ' ';
        }

        for (int k = asterisksN2; k >= 1; k--) {
            cout << '*';
        }

        for (int space1 = 1; space1 <= spacesN1; space1++) {
            cout << ' ';
        }

        for (int j = 1; j <= i; j++) {
            cout << '*';
        }

        cout << '\n';
    }
}