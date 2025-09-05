#include <iostream>

using namespace std;

int main() {
    int count = 0;
    while (count <= 12) {
        cout << "Count = " << count << " " << (count % 3 ? "--->" : "######") << endl;
        ++count;
    }
}