#include <iostream>
#include <string> 
using namespace std;

int main() {
    int age;
    bool condition;
    string output;

    cout << "Enter your age: ";
    cin >> age;

    // Method 1: Using ternary operator directly with cout
    age >= 18 ? cout << "You can cast the vote" : cout << "You can not cast the vote";
    cout << endl << endl;

    // Method 2: Storing the boolean result first, then using ternary
    condition = (age >= 18);
    condition ? cout << "You can cast the vote" : cout << "You can not cast the vote";
    cout << endl << endl;

    // Method 3: Using ternary to assign a value to a string variable
    condition = (age >= 18);
    output = condition ? "You can cast the vote" : "You can not cast the vote";
    cout << output << endl;

    return 0;
}
