#include <iostream>
using namespace std;

class sample
{
    int num;
public:
    sample(int x = 0)   // constructor name fixed
    {
        num = x;
    }

    void display()
    {
        cout << num;
    }

    friend sample operator+(sample, sample);
};

sample operator+(sample s1, sample s2)
{
    sample temp;
    temp.num = s1.num + s2.num;
    return temp;
}

int main()
{
    sample s1(20);
    sample s2(40);
    sample s3;

    s3 = s1 + s2;

    s3.display();

    return 0;
}