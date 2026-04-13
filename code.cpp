#include <iostream>
using namespace std;

class ANIMAL {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class DOG : public ANIMAL {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class REPTILE : public ANIMAL {
public:
    void crawl() {
        cout << "Reptile is crawling" << endl;
    }
};



int main() {

    DOG d;
    d.eat();   
    d.bark();  

    cout << endl;

    REPTILE r;
     
    r.crawl();  

    return 0;
}