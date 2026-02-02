/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.*/
/*C=95​(F−32)
F=59​C+32*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    float C, F;

    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> F;
        C = (5.0 / 9.0) * (F - 32);
        cout << "Temperature in Celsius = " << C;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> C;
        F = (9.0 / 5.0) * C + 32;
        cout << "Temperature in Fahrenheit = " << F;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}