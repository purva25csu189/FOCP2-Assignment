/* A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int num, largest;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> largest;   // assume first number is largest

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > largest) {
            largest = num;
        }
    }

    cout << "Largest number = " << largest << endl;

    return 0;
}
