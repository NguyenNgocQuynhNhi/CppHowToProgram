#include <iostream>

class Date { 
public: 
    Date (int theDay, int theMonth, int theYear) 
        : year{theYear}, day{theDay} {
            if (theMonth >= 1 && theMonth <= 12) {
                month = theMonth;
            }
            else {
                month = 1;
            }
    }
    void setDate(int theDay) {
        day = theDay;
    }
    int getDay() const { return day; }
    void setMonth(int theMonth) {
        if (theMonth >= 1 && theMonth <= 12) {
                month = theMonth;
            }
            else {
                month = 1;
            }
    }
    int getMonth() const { return month; }
    void setYear(int theYear) {
        year = theYear;
    }
    int getYear() const { return year; }
    void displayDate() {
        std::cout << day << "/" << month << "/" << year << std::endl; 
    }
private: 
    int month; 
    int day;
    int year;
};