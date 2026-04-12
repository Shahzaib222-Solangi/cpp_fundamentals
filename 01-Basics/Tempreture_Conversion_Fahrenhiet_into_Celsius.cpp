//Tempreture Conversion From Fahrenhiet to Celsius
 
#include<iostream>
using namespace std;
int main(){
float F;
cout<<"Enter temperature in Fahrenheit scale : ";
cin>>F;
float C;
C = (F-32)*5/9;
cout<<"Temperature in Celsius scale is : "<<C;
return 0;
}
