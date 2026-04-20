#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Constructor
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Purva", 30);
    s1.display();
    
    return 0;
}