#include <string>

class Student {
public:
    Student(std::string studentName, int avr) : name(studentName) {
        setAverage(avr);
    }
    void setAverage(int avr) {
        if(avr > 0) {
            if (avr <= 100) {
                average = avr;
            }
        }
    }
    int getAverage() const {return average;}
    void setName(std::string studentName) {
        name = studentName;
    }
    std::string getName() const {return name;}
    std::string getLetterGrade() const {
        std::string letterGrade;
        if (average >= 90) {
            letterGrade = "A";
        }
        else if (average >= 80) {
            letterGrade = "B";
        }
        else if (average >= 70) {
            letterGrade = "C";
        }
        else if (average >= 60) {
            letterGrade = "D";
        }
        else {
            letterGrade = "F";
        }
        return letterGrade;
    }

private:
    std::string name;
    int average{0};

};