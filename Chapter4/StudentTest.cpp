#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student student1("Minh", 88);
    Student student2("Nhi", 90);
    cout << student1.getName() << "'s average is " << student1.getAverage() << ", so he gets grade " << student1.getLetterGrade() << "." << endl;
    cout << student2.getName() << "'s average is " << student2.getAverage() << ", so she gets grade " << student2.getLetterGrade() << "." << endl;
}
