#include <iostream>
using namespace std;
int yourage = 0;
int main()
{
	cout << " This program's purpose is to determine if you are old enough to use this program . " << endl;
	cout << " What is your age " << endl;
	cin >> yourage;
	if (yourage >= 18)
	{
		
		cout << " Congratulations, you are old enough to use this program ! " << endl;
	}
	else
	{
		cout << " You are too young please exit this program !" << endl;
	}
	system("pause");
	return yourage;
}