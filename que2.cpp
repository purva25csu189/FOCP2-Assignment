/*An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle.*/

/*Logic
The area of a circle is calculated using the formula:
Area=π×r2
where r is the radius of the circle.

Algorithm
Start
Read the radius r
Calculate area = π × r × r
Display the area
End*/

#include<iostream>
using namespace std;
int main (){
    float r , area ;
    float pi = 3.14;
    cout<<"enter the radius of the fountain: ";
    cin>>r;
    area = pi*r*r;
    cout<<"area covered: "<<area;
    return 0;

}