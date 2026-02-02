/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
display results.*/

/*Logic
Bonus = 12% of Basic Salary
Net Salary = Basic Salary + Bonus
Repeat calculation for each employee

For each employee
Read basic salary
Calculate bonus = 12% of basic salary
Calculate net salary
Display results*/

#include<iostream>
using namespace std;
int main(){
    int emp , salary , bonus , netsalary , result;
    cout<<"enter the number of employee : ";
    cin>>emp;
    cout<<"enter the basic salary of the employees : ";
    cin>>salary;
    bonus = 0.12 *salary;
    netsalary= salary + bonus;
    cout<<"the salaries of employees, including a fixed 12% bonus for each employee : "<<netsalary;
    return 0;
}