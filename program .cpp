#include<iostream>
using namespace std ;
int main()
{
int fact,n,c;
fact=1;
cout<<"enter a number"<<endl;
cin>>n;
for(c=1;c<=n;c++)
fact=fact*c;
cout<<fact<<endl;
return 0 ;
}