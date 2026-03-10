
/*Write a code to check whether a citizen of India is eligible to vote or not.*/

#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter the age of the citizen: ";
cin>>age;
if(age>=18){
    cout<<"you can vote";
}
else{
    cout<<"young to vote";
}
return 0;
}