#include <iostream>
using namespace std;
int main()
 {
int num, reversed = 0;
cout << "Enter a positive integer: ";
cin >> num;
if (num <= 0)
{
cout << "Please enter a positive integer." << endl;
}
while (num > 0) {
int digit = num % 10;
reversed = reversed * 10 + digit;
num /= 10;
}
cout << "Reverse: " << reversed << endl;
return 0;
}