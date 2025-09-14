/*
 5.18 Assume that a = 4, b = 3, c = 2 and d = 1. What does each of the following statements print? 
a) cout << (a == 1) << endl 
b) cout << (b == 3) << endl; 
c) cout << (d >= 1 && c < 4) << endl; 
d) cout << (d <= 4 && b < d) << endl; 
e) cout << (b >= d || c == a) << endl; 
f) cout << ( c + d < b || b >= a) << endl; 
g) cout << (!d ) << endl; 
h) cout << (!( a - b)) << endl; 
i) cout << (!(c < d)) << endl; 
*/
#include <iostream>

using namespace std;

int main() {
    const unsigned int a = 4;
    const unsigned int b = 3;
    const unsigned int c = 2;
    const unsigned int d = 1;

    cout << (a == 1) << endl;   //0
    cout << (b == 3) << endl;   //1
    cout << (d >= 1 && c < 4) << endl;  //1
    cout << (d <= 4 && b < d) << endl;  //0
    cout << (b >= d || c == a) << endl; //1
    cout << ( c + d < b || b >= a) << endl; //0
    cout << (!d ) << endl;  //0
    cout << (!( a - b)) << endl;    //0
    cout << (!(c < d)) << endl;     //1
}