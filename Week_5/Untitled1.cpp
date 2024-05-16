#include <iostream>
using namespace std;

int main(){
cout << "Value for num1: " << endl;
int num1 ;
cin >> num1;

cout << "Value for num2: " << endl;
int num2;
cin >> num2;

cout << "Value for num3: " << endl;
int num3;
cin >> num3;

if (num1 > num2 and num1 > num3)
cout << num1 << " is the largest number" << endl;

else if (num2 > num3 and num2 > num1)
cout << num2 << " is the largest number" << endl;

else if (num3 > num1 and num3 > num2)
cout << num3 << " is the largest number" << endl;

//else if (num1 == num2)
//cout << "Ensure all three numbers are different" << endl;

//else if (num2 == num3)
//cout << "Ensure  numbers are different" << endl;

//else if (num1 == num3)
//cout << "Ensure the two numbers are different" << endl;



}