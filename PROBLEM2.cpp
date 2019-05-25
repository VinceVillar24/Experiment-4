#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()

{
	int x, y, z, i, n, a, j, temp;
	int arr[100];
// Menu
	cout << "Choose sorting style\n"
	     << "1. Selection Sort\n"
	     << "2. Bubble Sort\n";
	cin >> x;
// Switch Statement
	switch(x)
{
// Selection Sorting
	case 1: 
	 cout << "Selection Sorting..." << endl;
	 cout << "Enter Array size:"<< endl;
	 cin >> n;
// Input of Elements
	 cout << "Enter Elements" <<endl;
	 for (i=0; i < n; i++)
	 cin >> arr[i];
// Displaying the data
	 cout << "Your data:" <<endl;
	 for (i=0; i < n; i++)
	 cout << arr[i] << ",";
// Selection Sort Codes
    for (i=0; i < n; i++)
    {
    	for (j=i+1; j < n ; j++)
    	{
    		if (arr[i] > arr[j])
    		{
			
    		temp = arr[i];
    		arr[i] = arr[j];
    		arr[j] = temp;
		    }
	    }
    }  
// Output of Sorted Elements
    cout << "\nAfter using selection sort..." << endl;
    for (i=0; i<n; i++)
    {
    	cout << arr[i] <<",";
	}
	 break;	 
// Bubble Sorting
	case 2: 
	cout << "Bubble Sorting..." << endl;
	cout << "Enter Array size:"<< endl;
	cin >> n;
// Input of Elements
	 cout << "Enter Elements" <<endl;
	 for (i=0; i < n; i++)
	 {
	cin >> arr[i];
	cout << arr[i] <<", ";
     }
 // Displaying the Data   
	cout << "\nYour data:" <<endl;
	for (i=0; i < n; i++)
	cout << arr[i] << ",";
// Bubble Sort Codes
    for (i=0; i < n; i++)
    {
    	for (j=0; j < n-i-1 ; j++)
    	{
    		if (arr[j] > arr[j+1])
    		{
    		temp = arr[j];
    		arr[j] = arr[j+1];
    		arr[j+1] = temp;
		    }
	    }
    }  
// Output of Sorted Elements
    cout << "\nAfter using bubble sort..." << endl;
    for (i=0; i<n; i++)
    {
    	cout << arr[i] <<",";
	}
	break;
}
	return 0;
}
