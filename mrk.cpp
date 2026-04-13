#include <iostream>
using namespace std;


class STUDENT {
public:
    string name;
    int age, roll;

    void enter() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Roll No: ";
        cin >> roll;
    }
};


class TEST : public STUDENT {
public:
    float m1, m2, m3, avg;

    void marks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;

        avg = (m1 + m2 + m3) / 3;

        cout << "Average Marks = " << avg << endl;
    }
};

int main() {
    TEST t;

    t.enter();   
    t.marks();

    return 0;
}