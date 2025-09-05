#include <iostream>

using namespace std;

int main() {
    unsigned int x;
    cout << "Enter x = ";
    cin >> x;
    unsigned int y;
    cout << "Enter y = ";
    cin >> y;
    unsigned int i{1};
    unsigned int power{1};

    while (i <= y) {
        power *= x;
        i++;
    }
    cout << "power = " << power << endl;
}