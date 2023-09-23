#include<iostream>
using namespace std;

int main()
{
char c;
cout<<"enter a word:";
cin>>c;
switch (c)
{
case'a':
case'A':
cout<<"enter a vowel";
break;
case'e':
case'E':
cout<<"enter a vowel";
break;
case'i':
case'I':
cout<<"enter a vowel";
break;
case'o':
case'O':
cout<<"enter a vowel";
break;
case'u':
case'U':
cout<<"enter a vowel";
break;
default:
cout<<"enter a constant";
}
    return 0;
}