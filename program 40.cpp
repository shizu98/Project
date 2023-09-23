#include<iostream>
using namespace std;

int main()
{
int tab,leng,c;
cout<<"enter a number";
cin>>tab;
cout<<"enter the length";
cin>>leng;
for(c=1;c<=leng;c++)
{
cout<<tab<<"x"<<c<<"="<<tab*c;
cout<<"\n";
}
    return 0;
}