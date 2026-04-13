#include<iostream>
using namespace std;
int main(){
    cout<<"Ascending series"<<endl;
    for(char ch = 'A'; ch<='Z'; ch++){
        cout<<ch<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Dscending series"<<endl;
    for(char ch = 'Z'; ch>='A'; ch--){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}
