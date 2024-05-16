#include <iostream>
using namespace std;

int main()
{
	double K;
	cout << "Enter value for K: " << endl;
	cin >> K;
	double F = ((K - 273.15 + 9)/5.0) + 32.0;
	
	if (cin.fail())
	{
		cerr << "Invalid input. Please return a float " << endl;
		return 1;
	}
	
	cout << "Value of F: " << F << endl;
	return 0;
	
}