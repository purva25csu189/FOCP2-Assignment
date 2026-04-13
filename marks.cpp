//proteced data can be inherited by derived class but it is inaccessible to the main func.//


#include <iostream>
using namespace std;

// Class for Academic Marks
class StudyMarks {
protected:
    int academicMarks;

public:
    void setAcademicMarks(int m) {
        academicMarks = m;
    }
};

// Class for Extracurricular Marks
class ExtraMarks {
protected:
    int extraMarks;

public:
    void setExtraMarks(int m) {
        extraMarks = m;
    }
};

// Class for Total Marks (Multiple Inheritance)
class TotalMarks : public StudyMarks, public ExtraMarks {
public:
    void displayTotal() {
        int total = academicMarks + extraMarks;
        cout << "Total Marks = " << total << endl;
    }
};

// Main Function
int main() {
    TotalMarks student;

    student.setAcademicMarks(80);
    student.setExtraMarks(20);

    student.displayTotal();

    return 0;
}