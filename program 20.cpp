#include<iostream>
using namespace std;
int main ()
{
int Temp;
cout<<"enter temperature:";
cin>>Temp;
if(Temp>35)
{
cout<<"hot day";
}
else if(Temp==25)
{
cout<<"pleasant day";
}
else if(Temp<=25)
{
cout<<"Cool day";
}
else
cout<<"Invalid Temp";
return 0 ;
}