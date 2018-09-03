#include <iostream>
using namespace std;
int main()
{
	int mycookie = 25;
	cout << &mycookie << endl;
	int *mycookiepointer;
	mycookiepointer = &mycookie;
	cout << *mycookiepointer;
	system("pause");

}