#include <iostream>
using namespace std;

class Mobile
{
private:
    string brand;
    float price;
    int storage;

public:

    // Constructor 1: Only brand
    Mobile(string b)
    {
        brand = b;
        price = 0;
        storage = 0;
    }

    // Constructor 2: Brand and Price
    Mobile(string b, float p)
    {
        brand = b;
        price = p;
        storage = 0;
    }

    // Constructor 3: Brand, Price and Storage
    Mobile(string b, float p, int s)
    {
        brand = b;
        price = p;
        storage = s;
    }

    // Display function
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    // Object 1 (only brand)
    Mobile m1("Apple");

    // Object 2 (brand + price)
    Mobile m2("Samsung", 50000);

    // Object 3 (brand + price + storage)
    Mobile m3("OnePlus", 45000, 128);

   
    m1.display();
    m2.display();
    m3.display();

    return 0;
}