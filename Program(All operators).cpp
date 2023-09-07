#include<iostream>
using namespace std;
int main()
{
   //Logical operators
cout<<((4>6)&&(8>3))<<"\n";
cout<<((4<8)||(3>8))<<"\n";
cout<<!((4<8)||(3>8))<<"\n";

int a=50;
int b=20;
    //Arithmetic operators
cout<<"result of arithmetic operator are"<<"\n";
cout<<"addition of a and b is"<<a+b<<"\n";
cout<<"subtraction of a and b is"<<a-b<<"\n";
cout<<"multiplication of a and b is"<<a*b<<"\n";
cout<<"division of a over b is"<<a/b<<"\n";
cout<<"modulus of a over b is"<<a%b<<"\n";
     //Unary operators
cout<<"increases the value of a variable by 1 using post increament"<<a++<<"\n";
cout<<"increases the value of a variable by 1 using pre increament"<<++a<<"\n";
cout<<"decreases the value of a variable by 1 using post increament"<<b--<<"\n";
cout<<"decreases the value of a  variable by 1 using pre increament"<<--b<<"\n";
    //Assignment opertor
cout<<"result of assignment and compound assignment operator are"<<"\n";
 int marks=10;
cout<<"marks are"<<marks<<"\n";
   //Compound assignment operator
marks +=10;
marks -=10;
marks *=2;
marks /=2;
marks %=2;
   //compound operators
cout<<(a<b)<<"\n";
cout<<(a>b)<<"\n";
cout<<(a<=b)<<"\n";
cout<<(a>=b)<<"\n";
cout<<(a!=b)<<"\n";
cout<<(a==b)<<"\n";
}
