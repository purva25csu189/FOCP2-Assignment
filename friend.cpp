#include <iostream>
using namespace std;

class xyz;  // forward declaration

class abc {
    int num1;

public:
    abc(int x) {
        num1 = x;
    }

    // friend function declaration
    friend void add(abc, xyz);
};

class xyz {
    int num2;

public:
    xyz(int y) {
        num2 = y;
    }

    // friend function declaration
    friend void add(abc, xyz);
};

// friend function definition
void add(abc a1, xyz a2) {
    int sum;
    sum = a1.num1 + a2.num2;
    cout << "Sum = " << sum;
}

int main() {
    abc a1(24);
    xyz a2(46);

    add(a1, a2);

    return 0;
}