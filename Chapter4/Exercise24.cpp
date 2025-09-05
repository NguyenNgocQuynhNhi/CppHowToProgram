#include <iostream>

using namespace std;

int main() {
    cout << "Enter x: ";
    int x;
    cin >> x;
    cout << "Enter y: ";
    int y;
    cin >> y;

    cout << "-----------Expect the output----------" <<endl;
    cout << "When x = 5 and y = 15, the output is: OoOoO.\n";
    cout << "When x = 15 and y = 5, the output is:\nXxXxX\nOoOoO" << endl;

    cout << "-----------Check the answer-----------" << endl;
    if ( y < 10 )
    if ( x > 10 )
    cout << "XxXxX" << endl; 
    else
    cout << "YxYxY" << endl;
    cout << "OoOoO" << endl; 
}