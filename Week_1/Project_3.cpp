#include <iostream>
using namespace std;
const double pi = 3.142;

int main()
{

	double r;
	cout << "Enter the value of raduis: " << endl;
	cin >> r; 
	double h;
	cout << "Enter the value of height: " << endl;
	cin >> h;
	
	double v = pi * h * r * r;
	
	cout << "Volume of the Cylinder: " << v << endl;
	return 0;
	
}

