/*A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags*/

/*Rules Recap
If event ID divisible by 3 → "Buzz"
If event ID divisible by 5 → "Fuzz"
If event ID divisible by both 3 and 5 → "Buzz Fuzz"
Otherwise → print the event ID

Algorithm
Start
Read value N
For i from 1 to N
If i divisible by both 3 and 5 → print "Buzz Fuzz"
Else if i divisible by 3 → print "Buzz"
Else if i divisible by 5 → print "Fuzz"
Else → print i
End*/
#include<iostream>
using namespace std;
int main(){
    int n , buzz , fuzz;
    cout<<"enter the event id : ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Buzz Fuzz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Buzz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Fuzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}