#include<iostream>
using namespace std ;
int main()
{
int fact,n,c;
fact=1;
c=1;
cout<<"enter a number:"<<endl;
cin>>n;
do
{
fact=fact*c;
c++;
}
while(c<=n);
cout<<"the factorial of"<<n<<"is:"<<fact<<endl;
return 0 ;
}