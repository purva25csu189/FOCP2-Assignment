//design a class car that has attributes: brand and price ,
// write a construction to assign values and create two objectss to display the details of both cars 

#include<iostream>
using namespace std;

class Car {
    string brand;
    float price;

public:
    // Parameterized Constructor
    Car(string b, float p) {
        brand = b;
        price = p;
    }

    // Function to display details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "--------------------" << endl;
    }
};

int main() {

    // Creating two objects
    Car car1("BMW", 7500000);
    Car car2("Audi", 6500000);

    // Displaying details
    car1.display();
    car2.display();

    return 0;
}