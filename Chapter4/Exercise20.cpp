#include <iostream>

using namespace std;

int main() {
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCounters{1};
    int result;

    while (studentCounters <= 10) {
        do {
            cout << "Enter the result (1 = pass, 2 = fail): ";
            cin >> result;
        } while (result != 1 && result != 2);

        if (result == 1) {
            passes = passes + 1;
        }
        else if (result == 2) {
            failures = failures + 1;
        }

        studentCounters = studentCounters + 1;
    }

    cout << "Passed: " << passes << ".\nFailed: " << failures << "." <<endl;
    if (passes > 8) {
        cout << "Bonus to instructors!" << endl;
    }
}