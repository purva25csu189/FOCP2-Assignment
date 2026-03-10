#include<iostream>
using namespace std;
int main  (){
    int a,b;
    int swap;
    cout<<"enter the no. = ";
    cin>> a;
  cout<<"enter the no. = ";
    cin>> b;
     a = a * b;
    b = a / b;
    a = a / b;
   
  // a  = a + b;
  // b = a - b;
  // a = a - b;

   cout << a;
   cout << b;
   return 0;

   
}