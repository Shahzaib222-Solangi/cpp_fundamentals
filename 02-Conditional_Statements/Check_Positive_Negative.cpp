#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n>0){
        cout<<n<<" is a Positive number";
    } else if(n==0){
        cout<<n<<"Zero";
    } else{
        cout<<n<<" is a Negative number";
    }
    return 0;
}
