//CGPA Calculation

#include <iostream>
using namespace std;
int main ()
{
int marks;
cout<<"Enter the marks : ";
cin>>marks;
    if(marks>=93 && marks<=100){
    cout<<"CGPA is : 4.00";}
    else if(marks>=87 && marks<=92){
    cout<<"CGPA is : 3.67";}
    else if(marks>=82 && marks<=86){
        cout<<"CGPA is : 3.33";}
    else if(marks>=77 && marks<=81){
            cout<<"CGPA is : 3.00";}
    else if(marks>=72 && marks<=76){
        cout<<"CGPA is : 2.67";}
    else if(marks>=68 && marks<=71){
            cout<<"CGPA is : 2.30";}
    else if (marks>=64 && marks<=67){
        cout<<"CGPA is : 2.00";}
    else if (marks>=60 && marks<=63){
        cout<<"CGPA is : 2.00";}
    else if (marks>=0 && marks<=59){
        cout<<"CGPA is : 0.00";}
    else {
        cout<<"Invalid input";
        }
    return 0;
}
