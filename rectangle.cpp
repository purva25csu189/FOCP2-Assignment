//a furniture showroom wants to develop a simple C++ program to manage detals of different types of tables .
//each table can be purchased in different ways:
//'some customers buy a table by specifying  only the price(default table )
//some customers specify the material and price
//some customers specify material , price , and number of legs(custom layout )
//design a class table that uses constructor overloading to handle all three cases;
//1. a default constructor that sets material as 'wood' price as 5000, and legs as 4
//2. a constructor that accepts material and price
//3. a constructor that accepts material , price, and number of legs
// create three objects using different constructor and display the details of each table

#include<iostream>
using namespace std;

class Table {
    string material;
    float price;
    int legs;

public:

    // 1️⃣ Default Constructor
    Table() {
        material = "Wood";
        price = 5000;
        legs = 4;
    }

    // 2️⃣ Constructor with material and price
    Table(string m, float p) {
        material = m;
        price = p;
        legs = 4;  // default legs
    }

    // 3️⃣ Constructor with material, price, and legs
    Table(string m, float p, int l) {
        material = m;
        price = p;
        legs = l;
    }

    // Function to display details
    void display() {
        cout << "Material: " << material << endl;
        cout << "Price: " << price << endl;
        cout << "Number of Legs: " << legs << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    // Creating objects using different constructors

    Table t1;                          // Default constructor
    Table t2("Steel", 8000);           // Material + Price
    Table t3("Glass", 12000, 3);       // Material + Price + Legs

    // Display details
    t1.display();
    t2.display();
    t3.display();

    return 0;
}