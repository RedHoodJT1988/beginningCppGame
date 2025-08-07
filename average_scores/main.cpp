// Average Scores
// Receive scores from the user and get the average

#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3;
    cout << "Please enter a score: " << endl;
    cin >> score1;
    cout << "Please enter a second score: " << endl;
    cin >> score2;
    cout << "Please enter a third score: " << endl;
    cin >> score3;

    cout << "Your average score is: " << score1 + score2 + score3 / 3 << endl;
}