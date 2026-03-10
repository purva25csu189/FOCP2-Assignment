//write a c++ program to demonstrate function overloading by creating multiple functions named volume;
//one function to calculate the volume of a cube
//one function to calculate the volume of a cuboid
// '''''' of a cylinder
// call all the overloaded volume function in the main() function and display 

#include<iostream>
using namespace std;

// Volume of Cube
float volume(float side) {
    return side * side * side;
}

// Volume of Cuboid
float volume(float length, float breadth, float height) {
    return length * breadth * height;
}

// Volume of Cylinder
float volume(float radius, float height) {
    return 3.14 * radius * radius * height;
}

int main() {

    float side = 5;
    float l = 4, b = 3, h = 2;
    float r = 3, cylHeight = 7;

    cout << "Volume of Cube: " << volume(side) << endl;
    cout << "Volume of Cuboid: " << volume(l, b, h) << endl;
    cout << "Volume of Cylinder: " << volume(r, cylHeight) << endl;

    return 0;
}