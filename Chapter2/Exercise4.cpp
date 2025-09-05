#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int result = 0;
    cout << "Enter 3 integers: " <<endl;
    cin >> x >> y >> z;
    result = x * y * z;
    cout << "The result is " << result << endl;
    return 0;
}