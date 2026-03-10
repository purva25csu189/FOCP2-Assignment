//area of recd,sq without class and object 
#include<iostream>
using namespace std;

float area(float length, float breadth) {
    return length * breadth;
}

float area(float side) {
    return side * side;
}
int main() {

    float l = 10, b = 5;
    float s = 4;

    cout << "Area of Rectangle: " << area(l, b) << endl;
    cout << "Area of Square: " << area(s) << endl;

    return 0;
}