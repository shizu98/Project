#include<iostream>
using namespace std;
int main()
{
int n,i,num,r,sum;
sum=0;
cout<<"enter a number=;
cin>>num;
cout<<"armstrong number="<<endl;
for(i=1;i<=num;i++0
{
sum=0;
n=i;
while(n!=0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(i==sum)
{
cout<<i<<endl;
}
return 0;
}
