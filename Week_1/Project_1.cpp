#include <iostream>
using namespace std;
// a1x + b1y = c
// a2x + b2y = d
int main()
{
	cout << "a1x + b1x = c" << endl;
	cout << "a2x + b2X = d" << endl;
	double a1;
	cout << "Enter value for a1: " << endl;
	cin >> a1;
	
	double a2;
	cout << "Enter value for a2: " << endl;
	cin >> a2;
	
	double b1;
	cout << "Enter value for b1: " << endl;
	cin >> b1;
	
	double b2;
	cout << "Enter value for b2: " << endl;
	cin >> b2;
	
	double c;
	cout << "Enter value for c: " << endl;
	cin >> c;
	
	double d;
	cout << "Enter value for d: " << endl;
	cin >> d;
	
	double z = 1.0/(a1*b2 -a2*b1);
	double x = z*(b2*c -b1*d);
	double y = z*(-a2*c+a1*d);
	
	cout << "Value of x: " << x << endl;
	cout << "Value of y: " << y << endl;
}