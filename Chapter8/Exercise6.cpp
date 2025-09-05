#include <iostream>

using namespace std;

int main() {
    int *zPtr; // zPtr will reference built-in array z
    void *sPtr = nullptr;
    int number;
    int z[ 6 ] = { 10, 20, 30, 40, 50, 60 };
    zPtr = z;
    
    for (int i = 5; i >= 0; i--) {
        cout << "When i = " << i << ", " << zPtr[i] << endl;
    }


    cout << "z[0] = " << z[0] <<endl;
    cout << "z[1] = " << z[1] <<endl;
    cout << "z[2] = " << z[2] <<endl;
    cout << "z[3] = " << z[3] <<endl;
    cout << "z[4] = " << z[4] <<endl;
    cout << "z[5] = " << z[5] <<endl;
}