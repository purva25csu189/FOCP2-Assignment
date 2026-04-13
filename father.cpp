#include <iostream>
using namespace std;

// Base class
class Father {
public:
    Father(string f) {
        cout << "Father's Name: " << f << endl;
    }
};

// Derived class
class Child : public Father {
public:
    Child(string f, string c) : Father(f) {
        cout << "Your Name: " << c << endl;
    }
};

int main() {
    Child obj("surender", "Puru");
    return 0;
}