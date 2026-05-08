#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, sum;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = a + b;

    ofstream fout;
    fout.open("add.txt");

    fout << "Sum = " << sum;

    fout.close();

    cout << "Sum has been written to file add.txt";

    return 0;
}