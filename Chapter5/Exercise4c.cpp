#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "The number is 1" << endl;
        // break;
    case 2:
        cout << "The number is 2" << endl;
        // break;
    default:
        cout << "The number is not 1 or 2" << endl;
        // break;
    }
    cout << "Done!" << endl;
}