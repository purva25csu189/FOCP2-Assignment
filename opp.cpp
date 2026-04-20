#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Overload + operator
    Number operator + (Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    // Display function
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    n3 = n1 + n2;   // operator overloading

    cout << "After addition: ";
    n3.display();

    return 0;
}