//write a program to pverload - by using operator overloading
#include <iostream>
using namespace std;

class sample
{
    int num;

public:
    sample(int x = 0)
    {
        num = x;
    }

    void display()
    {
        cout << num;
    }

    // overload - operator
    friend sample operator-(sample, sample);
};

sample operator-(sample s1, sample s2)
{
    sample temp;
    temp.num = s1.num - s2.num;
    return temp;
}

int main()
{
    sample s1(50);
    sample s2(20);
    sample s3;

    s3 = s1 - s2;

    s3.display();

    return 0;
}