/*Create a class Student with data members: name and marks. Use a constructor to initialize
the values and display the student details using a member function.*/

#include<iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:

    // Constructor
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    // Member function to display details
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1("Puru", 92);   // object creation

    s1.display();             // calling member function

    return 0;
}