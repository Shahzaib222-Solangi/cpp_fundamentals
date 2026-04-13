#include<iostream>
using namespace std;
int main(){
int a=-1,b=1,n,c;
cout<<"Enter the no of terms : ";
cin>>n;
cout<<"Fibonacci sequence:";
for(int i=1; i<=n; i++){
    c=a+b;
    cout<<c<<",";
    a=b;
    b=c;
}
return 0;
}
