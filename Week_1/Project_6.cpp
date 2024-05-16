#include <iostream>
using namespace std;

int main()
{
	int v;
	cout << "Enter value you want to be represented in hours and minutes: " << endl;
	cin >> v; 
	 
	int h = v / 60;
	int m = v % 60;
	cout << h << "hrs" << ":" << m << "mins" << endl;
	return 0;
}