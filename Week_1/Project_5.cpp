#include <iostream>
using namespace std;

double const pi = 3.142;
int main()
{
	double r;
	cout << "Enter value for radius:" << endl;
	cin >> r;
	
	double v = (4/3)*pi*r*r;
	cout << "Volume: " << v << endl;
	return 0; 
}