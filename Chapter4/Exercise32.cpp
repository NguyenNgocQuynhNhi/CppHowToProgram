/* 
4.32 What’s wrong with the following statement? Provide the correct statement to accomplish
what the programmer was probably trying to do.
cout << ++( x + y );
*/

#include <iostream>

using namespace std;

int main() {
    int x = 2;
    int y = 3;
    // cout << ++(x + y);
    // cout << (x + y)++;  
    int sum = x + y;
    cout << ++ sum;
}