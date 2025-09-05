#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double time;
    double leaveTime;

    while (1) {
        cout << "Enter number of hours worked (-1 to end): ";
        cin >> time;
        if (time == -1) { break; }

        leaveTime = 2 + time * 0.1;
        cout << "Accrued leave: " << fixed << setprecision(2) << leaveTime <<" hours" << endl;
        cout << endl;
    }
}