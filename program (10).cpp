#include<iostream>
using namespace std;
int main()
{
    int n,i,re,binary,var;
    i=1;
    var=1;
    cin>>n;
    while(n!=0)
    {
    re=n%2;
    n=n/2;
    binary=binary+(re*i);
    i=i*10;
    cout<<var;
}
return 0;
}
