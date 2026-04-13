//Printing Table
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter any number to print its table : ";
    cin>>n;
    for(i=1; i<=10; i++){
        cout<<n<<"x"<<i<<" = "<<n*i<<endl;

    }
return 0;
}
