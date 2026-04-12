#include<iostream>
using namespace std;
int main(){
    int speed,limit,overspeed,fine;
    cout<<"Enter the vehicle Speed : ";
    cin>>speed;
    cout<<"Ente the speed limit : ";
    cin>>limit;
    if(speed<=limit){
        cout<<"Vehicle is moving within speed limit";
    } else if(speed>limit){
        cout<<"Vehicle is moving over the limit "<<endl;
        overspeed=speed-limit;
        cout<<"Overspeed is : "<<overspeed<<endl;
        overspeed/=5;
        fine=overspeed*20;
    }
    cout<<"fine is : "<<fine;
    return 0;
}
