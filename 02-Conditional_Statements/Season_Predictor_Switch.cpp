#include<iostream>
using namespace std;
int main(){
    int monthNumber;
    cout<<"Enter month number : ";
    cin>>monthNumber;
    switch(monthNumber){
    case 12:
    case 1:
    case 2:
        cout<<"Winter season";
    break;
    case 3:
    case 4:
        cout<<"Spring season";
    break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        cout<<"Summer season";
    break;
    case 10:
    case 11:
        cout<<"Autumn season";
    break;
    default:
        cout<<"Invalid";
    }
    return 0;
}
