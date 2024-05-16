#include <iostream>
using namespace std;
int main()
{
	
	int n;
	cout << "Enter value of n: " << endl;
	cin >> n;
	int j;
	int k;
	for (j=1; j<=12; j++){
		for (k=1; k<=12; k++){
					cout << j << "*" << k << "=" << j * k << "/t" endl;
		
	}
	cout << endl;
	} 
	return 0;
}