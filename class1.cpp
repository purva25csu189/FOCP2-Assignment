/*Design a class Car that has attributes: brand and price. Write a constructor to assign values
and create two objects to display the details of both cars.*/

#include<iostream>
using namespace std;

class Car
{
    string brand;
    int price;

public:

    // Constructor
    Car(string b, int p)
    {
        brand = b;
        price = p;
    }

    // Function to display details
    void display()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};

int main()
{
    // Creating two objects
    Car c1("Toyota", 2000000);
    Car c2("BMW", 6000000);

    // Display details
    c1.display();
    c2.display();

    return 0;
}