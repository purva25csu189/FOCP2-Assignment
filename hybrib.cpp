#include <iostream>
using namespace std;

// Base Class: Student
class Student {
protected:
    string name;

public:
    void setStudent(string n) {
        name = n;
    }
};

// Derived Class: Marks (from Student)
class Marks : public Student { 
protected:
    int totalMarks;

public:
    void setMarks(int m) {
        totalMarks = m;
    }
};

// Independent Class: Friends
class Friends {
protected:
    string friend1, friend2;

public:
    void setFriends(string f1, string f2) {
        friend1 = f1;
        friend2 = f2;
    }
};

// Derived Class: StudentPerformance (from Marks + Friends)
class StudentPerformance : public Marks, public Friends {
public:
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Friends: " << friend1 << " and " << friend2 << endl;

        if (totalMarks >= 90)
            cout << "Performance: Excellent" << endl;
        else if (totalMarks >= 75)
            cout << "Performance: Good" << endl;
        else
            cout << "Performance: Average" << endl;
    }
};

// Main Function
int main() {
    StudentPerformance s;

    s.setStudent("Puru");
    s.setMarks(85);
    s.setFriends("Rahul", "Aman");

    s.display();

    return 0;
}