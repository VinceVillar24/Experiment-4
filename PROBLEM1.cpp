#include <iostream>
#include <conio.h>
#include <cmath>
#include <string>

using namespace std;

int main ()
{
int x, y, z;
char a;
// Menu
  cout << "MENU:"
       << "\n1.Add"	
	   << "\n2.Subtract"
	   << "\n3.Multiply"
	   << "\n4.Divide"
       << "\n5.Modulus" <<endl;   
// Selection of Choice      
do 
{
  cout << "Enter your choice: ";
  cin >> z;
// Input 2 Integers
  cout << "Enter your two numbers: " << endl;
  cin >> x >> y;
// Processing of choice using switch statement
switch (z) 
{
case 1:
  cout << "Result: " << (x+y);
  break;
case 2: 
  cout << "Result: " << (x-y);
  break;
case 3: 
  cout << "Result: " << (x*y);
  break;
case 4: 
  cout << "Result: " << (x/y);
  break;
case 5: 
  cout << "Result: " << (x%y);
  break;
}
// Continuation of process
cout << "\nContinue?";
cin >> a;
}
while (a == 'y');
return 0;
}
