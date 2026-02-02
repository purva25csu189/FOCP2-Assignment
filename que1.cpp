/*A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.*/

/*Logic
Accept marks of three students
Add the three numbers
Divide the sum by 3 to get the average

Algorithm
Start
Read three numbers: a, b, c
Calculate average = (a + b + c) / 3
Display the average
End*/

#include<iostream>
using namespace std;
int main (){
    float a , b , c , avg;
    cout<< "enter the marks of three students:\n";
    cin>>a>>b>>c;
    avg = (a+b+c)/3;
cout << "Average marks = " << avg;
    return 0;
}
