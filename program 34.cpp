#include<iostream>
using namespace std;
int main()
{
int base,expo, result,i;
cout<<"enter base number:";
cin>>base;
cout<<"enter exponent number:";
cin>>expo;
result=1;
i=0;
do
{
result=result*base;
i++;
}
while(i<expo);
cout<<"the result is:"<<result<<endl;
    return 0;
}