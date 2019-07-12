#include <cstdlib> 
#include <iostream> 
#include <conio.h>
#include <iomanip> 
#include <cmath>
#include <math.h>
  
using namespace std; 
  
void displaymenu()
{ 
	//Problem statement.
	cout << "This is a C++ program using functions that will display the calculator menu. The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer values for the calculation.\n" << endl; 
	
	//Choices menu.
	cout << "\n\t1 - Addition";
	cout << "\n\t2 - Subtraction";
	cout << "\n\t3 - Multiplication";
	cout <<	"\n\t4 - Division";
	cout << "\n\t5 - Modulus"; 
} 
	//The different cases or functions for the calculator.
	int addition(int x, int y)
	{ 
		return(x + y); 
	} 
  
	int subtraction(int x, int y)
	{ 
		return(x - y); 
	} 
  
	int multiplication(int x, int y)
	{	 
		return(x * y); 
	}

	float division(int x, int y)	
	{	 
		return(x / y); 
	} 

	int modulus(int x, int y)
	{ 
		return(x % y); 
	} 
  
int main(int argc, char *argv[]) 
{ 
	displaymenu(); 
	int ans; 
	int x; 
	int y; 
	char cont; 
	
	do
	{
		//Your choice.
		cout << "\nEnter your choice (1-5): "; 
		cin >> ans; 

		//Input the values here.
		cout << "\nEnter the first number: ";
		cin >> x;
		cout << "\nEnter the second number: ";
		cin >> y; 

	switch(ans)	
	{
		case 1:
		cout << "\nSum = " << addition(x, y);
		break;

		case 2:
		cout << "\nDifference = " << subtraction(x, y);
		break;

		case 3:
		cout << "\nProduct = " << multiplication(x, y);
		break;

		case 4:
		if (y == 0)
		cout << "\nDivision by 0 is not allowed!" << division(x, y);
		
		else 
		cout << "\nQuotient = " << division(x, y);
		break;

		case 5: 
		cout << "\nModulus = " << modulus(x, y);
		break;

		default:
		cout << "\nInvalid input.";
	}
                 
		cout << endl << endl;

		//Do you want to continue? Yes or no?
		cout << "\nPress Y or y to continue:"; 
		cin >> cont; 

	}while(cont == 'Y'|| cont == 'y'); 

getch ();
return 0;
}