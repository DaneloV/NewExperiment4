#include <iostream>
#include <conio.h>
#include <iomanip>
 
using namespace std;

void BubbleSort(int arr[], int n)
{
	int i, j;

	//For ascending function.
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j] + arr[j + 1];
				arr[j+1] = arr[j] - arr[j + 1];
				arr[j] = arr[j] - arr[j + 1];
			}
		}
	}	
}	
 
int main()
{
	//Problem statement.
	cout << "\nThis is a C++ functional program that sorts n number of elements using bubble sort.\n" << endl;

	int n, i;
	int arr[100];
	
	//Input the size of the array.
	cout << "\nEnter the array size: ";
	cin >> n;

	//Input the values for each array element.
	for (i = 0; i < n; i++)
	{
		cout << "\nEnter the array element " << i + 1 << ": ";
		cin >> arr[i];
	}

	//Shows the values of elements that you've input.
	cout << "\nThe unsorted array elements: " << endl;
	for (i = 0; i < n; i ++)
	{
	cout << arr[i] << " \n" << endl;
	}
 
	BubbleSort(arr, n);

	//The output or result.
	cout << "\nThe sorted array elements in an ascending order: " << endl;
	for (i = 0; i < n; i++)
	{
        cout << arr[i] << " \n" << endl;
	}

getch ();
return 0;
}