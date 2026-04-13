
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range upto which loop should run : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cout<<i<<" is odd"<<endl;
        } else {
            cout<<i<<" is even"<<endl;
        }
    }
    cout<<endl;
    return 0;
}
