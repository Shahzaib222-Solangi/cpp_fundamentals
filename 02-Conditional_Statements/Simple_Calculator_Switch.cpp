#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char ch;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout << "Enter any of the character(+,-,*,/,%) : ";
    cin >>ch;
    switch(ch){
    case('+'):
        cout<<"Operator is plus and result is "<<num1+num2;
    break;
    case('-'):
        cout<<"Operator is minus and result is "<<num1-num2;
    break;
    case('*'):
        cout<<"operator is multiplier and result is "<<num1*num2;
    break;
    case('/'):
        cout<<"operator is divider and result is "<<num1/num2;
    break;
    case('%'):
        cout<<"Operator is remainder and result is "<<num1%num2;
    break;
    default:
        cout<<"Invalid";
    break;
    }
    return 0;
}
