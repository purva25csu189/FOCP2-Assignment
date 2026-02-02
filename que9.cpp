/* A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol.*/

/*🔹 What the Question Means
The program should:
Take one input symbol
Decide whether it is:
a Vowel (a, e, i, o, u in upper or lower case)
a Consonant (any other alphabet letter)
a Number (0 to 9)

🔹 Logic (In Simple Words)
Read a character ch
Check if ch is a digit (0–9)
Else check if ch is an alphabet
If alphabet → check whether it is a vowel
If not vowel → it is a consonant
Otherwise → invalid symbol (optional, but good practice)*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if number
    if (ch >= '0' && ch <= '9') {
        cout << "It is a Number";
    }
    // Check if alphabet
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        // Check for vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "It is a Vowel";
        } else {
            cout << "It is a Consonant";
        }
    }
    else {
        cout << "Invalid Symbol";
    }

    return 0;
}
