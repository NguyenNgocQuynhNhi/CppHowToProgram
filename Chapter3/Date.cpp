#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    int day;
    int month;
    int year;
    cin >> day >> month >> year;
    Date date(day, month, year);
    date.displayDate();
}