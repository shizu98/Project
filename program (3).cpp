#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,i,n,sum;
    sum=0;
    cout<<"enter value of x=";
    cin>x;
    cout<<"enter value of n=";
    cin>>n;
    for(i=1;i<=n;i++)
    sum=sum+pow(x,i);
    cout<<"sum="<<sum;
    return 0;
}
