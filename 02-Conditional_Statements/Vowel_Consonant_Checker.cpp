#include<iostream>
using namespace std;
int main()
{
char alphabet;
cout<<"Enter any English alphabet : ";
cin>>alphabet;
switch(alphabet){
case('a'): case('A'): case('e'): case('E'): case('i'):
case('I'): case('o'): case('O'): case('u'): case('U'):
    cout<<alphabet<<" is a Vowel";
break;
default:
    cout<<alphabet<<" is a consonant";
}

return 0;
}
