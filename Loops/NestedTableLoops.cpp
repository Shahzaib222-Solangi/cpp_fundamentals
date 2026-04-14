#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number up to which you want to calculate tables: ";
    cin >> num;

  //outer loop
    for (int i = 1; i <= num; i++) {
        cout << "----- Table of " << i << " -----" << endl;
        
        // Inner loop 
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        
        cout << endl; 
    }

    return 0;
}
