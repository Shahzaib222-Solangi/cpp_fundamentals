#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int columns = 5;

  //Outer loop
    for (int i = 1; i <= rows; ++i) {
      
        // Inner loop 
        for (int j = 1; j <= columns; ++j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
