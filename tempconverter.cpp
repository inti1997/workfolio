#include <iostream>
using namespace std;
float degrees(float farenheight)
{
	float celsius;
	cout << " The Purpose of this function is to calculate temperature in celsius if entered in Farenheight! " << endl;
	cin >> farenheight;
	celsius = 9 * farenheight / 5 + 32;
	cout << " The Answer Is ... " << celsius << endl;
	return celsius;
}
int main()
{
	cout<< degrees(100) << endl;
	system("pause");
	return 0;
}
