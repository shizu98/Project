#include <iostream>
using namespace std;
int main()
{
int n;
long sum = 0;
cout << "Enter a positive integer (n): ";
cin >> n;
if (n <= 0)
{
cout << "Please enter a positive integer." << endl;
}
for (int i = 1; i <= n; ++i) 
{
sum +=(i)*i;
}
cout << "The sum of squares from 1 to " << n << " is: " << sum << endl;
return 0;
}