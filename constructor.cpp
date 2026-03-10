//create a class student with data member name , and marks 
//Use a constructor to initialize the values and display the student detail using a member function 

#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    double marks;
    public:
    Student()
    {
        name = "rahul";
        marks=81;
    }
    void display()
    {
        cout<<"Name is: "<<name;
        cout<<"marks are: "<<marks;
    }
};
int main()
{
    Student S1;
    S1.display();
}