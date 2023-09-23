#include<iostream> 
 using namespace std; 
 int main () 
 { 
int s,e,n; 
n=1;
cout<<"enter starting num" "\n"; 
cin>>s; 
cout<<"enter ending num" "\n"; 
cin>>e; 
do{ 
 n=n+2;
 cout<<n;
 cout<<endl;
} 
while(n<=e); 
return 0;
}