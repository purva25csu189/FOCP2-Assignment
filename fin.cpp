#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;

    fstream fout;
    fout.open("student.txt", ios::out);

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    fout << name << endl;
    fout << age;
    fout.close();

    fstream fin;
    fin.open("student.txt", ios::in);

    fin >> name;
    fin >> age;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age;

    fin.close();

    return 0;
}