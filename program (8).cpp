#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,j;
    cout<<"enter value of=";
    cin>>n1;
    cout<<"enter value of=";
    cin>>n2;
    for(i=n1;i<=n2;i++)
    {
    for(j=2;j<=i;j++
{
    if(i%j==0)
    break;
}
if(i==j)
cout<<j<<endl;
return 0;
}
