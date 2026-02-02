/*A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
and identify the winner.*/
#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3;

    cout << "Enter score of Player 1: ";
    cin >> score1;

    cout << "Enter score of Player 2: ";
    cin >> score2;

    cout << "Enter score of Player 3: ";
    cin >> score3;

    if (score1 > score2 && score1 > score3) {
        cout << "Player 1 is ahead (Winner)";
    }
    else if (score2 > score1 && score2 > score3) {
        cout << "Player 2 is ahead (Winner)";
    }
    else if (score3 > score1 && score3 > score2) {
        cout << "Player 3 is ahead (Winner)";
    }
    else {
        cout << "There is a tie between players";
    }

    return 0;
}