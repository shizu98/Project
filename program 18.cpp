#include<iostream>
using namespace std;
int main()
{
int grade, score;
cout<<"enter score"<<endl;
cin>>score;
if(score>=90)
cout<<"The Grade is A"<<endl;
else if(score>=80&&90)
cout<<"The Grade is B"<<endl;
else if(score>=70&&79)
cout<<"The Grade is C"<<endl;
else if(score>=60&&69)
cout<<"The Grade is D"<<endl;
else 
cout<<"The Grade is F"<<endl;
cout<<"The students grade is"<<grade<<endl;
return 0;
}