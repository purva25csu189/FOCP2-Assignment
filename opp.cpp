#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v = 0) { // we give the deault arg because if user  does not pass the arg , the default arg will be taken by the coplier to initialize rhe value but if we are passing thr arg while callin or crating that arg holds the higher priority than default arg
        value = v;
    }
//when we overload the operator and if we are add 2 obj 
//wh3n we aew working on operator overloading without func , we need to pass only one obj as an arg .

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
n2.display();
    return 0;
}
// n1 calling + operator 
//n2 is passed as an arg to operator + func 