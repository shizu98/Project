#include<iostream>
using namespace std ;
int main()
{
int num1,num2,num3, smallest;
cout<<"enter the 1st number"<<endl;
cin>>num1;
cout<<"enter the  2nd number"<<endl;
cin>>num2;
cout<<"enter the 3rd number"<<endl;
cin>>num3;
if(num1<=num2)
{
if(num1<=num3)
smallest=num1;
}
else{
smallest=num3;
}
if(num2 <= num3)
{
smallest=num2;
}
else 
{
smallest=num3;
}
cout<<"the smallest number is:"<<smallest<<endl;
return 0 ;
}