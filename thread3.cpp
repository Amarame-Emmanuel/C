#include <iostream>
#include <thread>
using namespace std;

void printx(int num)
{
	for (int i=0; i<=num; i++)
	cout << "x";
}
void printy(int num)
{
	for (int i=0; i<=num; i++)
	cout << "Y";
}
int main()
{
	int num;
	cout << "Enter value for X :";
	cin >> num;
	thread t1(printx, num);
	thread t2(printy, 600);
	
	t1.join();
	t2.join();
	return 0;
}