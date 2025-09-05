#include <iostream>

using namespace std;

int main() {
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int students{1};

    while (students <= 10) {
        cout << "Enter student's exam result (1 = pass, 2 = fail): ";
        int result;
        cin >> result;

        if (result == 1) {
            passes = passes + 1;
        }
        else if (result == 2) {
            failures = failures + 1;
        }

        students = students + 1;
    }

    cout << "The number of students passing the exam is: " << passes << endl;
    cout << "The number of students failing the exam is: " << failures << endl;

    if (passes > 8) {
        cout << "Bonus to instructor!" << endl;
    } 
}