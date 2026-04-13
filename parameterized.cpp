#include<iostream>
using namespace std;

class Base 
{int x;
public : 
Base (int a)
{x=a;
cout<<x;
}
};
class Derived:public Base
{int y;
public:
Derived(int a,int b):Base(a)
{y=b;
cout<<y;
}};
int main()
{Derived d(10,20);
return 0;
}