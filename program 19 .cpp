#include<iostream>
using namespace std ;
int main ()
{
int r,x;
float area, circumference ;
cout<<"enter radius:";
cin>>r;
cout<<"press 1 to calculate area of circle"<<endl;
cout<<"press 2 to calculate circumference of circle"<<endl;
cin>>x;

if(x==1)
{
area=3.14*r*r;
cout<<"area of circle:"<< area <<endl;
}
else if(x==2)
{
circumference=2*3.14*r;
cout<<"circumference of the circle:"<< circumference <<endl;
}
else
{
cout<<"invalid";
}
return 0 ;
}