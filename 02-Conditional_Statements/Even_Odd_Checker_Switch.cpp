#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    switch (num % 2)
    {
    case 0:
        cout << "it is even";
        break;
    default:
        cout << "It is odd";
    }

    return 0;
}
