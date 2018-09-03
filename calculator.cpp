#include <iostream>
#include <cmath>
using namespace std;
int operation, x, y, sum, difference, product, num;
int main() 
{
	cout << " Please choose an operation to perform " << endl;
	cout << " Operation 1 is the sum " << endl;
	cout << " Operation 2 is difference " << endl;
	cout << " Operation 3 is product " << endl;
	cout << " Operation 4 is square root of any number " << endl;
	cout << " Operation 5 is any number to any power " << endl;
	cin >> operation;
	
	if (operation == 1)
	{
		cout << " Please input a value for x ";
		cin >> x;
		cout << " Please input a value for y ";
		cin >> y;
		sum = x + y;
		cout << " The sum of x and y is " << sum << endl;
	}
	
	if (operation == 2)
	{
		cout << " Please input a value for x " << endl;
		cin >> x;
		cout << " Please input a value for y " << endl;
		cin >> y;
		difference = x - y;
		cout << " The difference of x and y is " << difference << endl;
	}
	
	if (operation == 3)
	{
		
		cout << " Please input a value for x " << endl;
		cin >> x;
		cout << " Please input a value for y " << endl;
		cin >> y;
        product = x*y;
		cout << " The product of x and y is " << product << endl;
	}
	
	if (operation == 4)
	{
		num = 0;
		cout << " Select a value for num " << endl;
		cin >> num;
		cout << " The square root of " << num << " is " << sqrt(num) << endl;
	}
	if (operation == 5)
	{
		num = 0; 
		cout << " Select a value for num " << endl;
		cin >> num;
		cout << " The square of  " << num << " is " << pow(num, 2) << endl;
		system("pause");
	}
	else
		system("pause");
	return 0;
}