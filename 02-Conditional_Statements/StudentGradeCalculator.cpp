#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter Student's Score b/w (0-100): ";
    cin >> score;

    // Nested Ternary Operator to determine grade
    grade = (score >= 90 && score <= 100) ? 'A' :
            (score >= 80 && score < 90)   ? 'B' :
            (score >= 70 && score < 80)   ? 'C' :
            (score >= 60 && score < 70)   ? 'D' : 'F';

    cout << "Student's Grade is: " << grade << endl;

    return 0;
}
