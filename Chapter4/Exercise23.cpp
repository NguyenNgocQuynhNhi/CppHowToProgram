#include <iostream>

using namespace std;

int main () {
    cout << "Enter x: ";
    int x;
    cin >> x;
    cout << "Enter y: ";
    int y;
    cin >> y;
    
    cout << "-----------Dangling-else Problem------------" << endl;
    if (x > 5)
        if (y > 5)
            cout << "x and y are > 5";
    else 
        cout << "x is <= 5"; 

    cout << "\n-----------After correcting-----------------" << endl;
    if (x > 5)
    {
        if (y > 5) {
            cout << "x and y are > 5";
        }
    }
    else {
        cout << "x is <= 5";
    }
    

    
}