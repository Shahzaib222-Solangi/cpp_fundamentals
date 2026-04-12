#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enetr the second number : ";
    cin>>num2;
    if(num1>num2){
        cout<<"First number is greater than second";
    } else if(num2>num1){
        cout<<"Second number is greater than first";
    } else if(num1==num2){
        cout<<"Both first and second numbers are equall";
    }
    return 0;
}
