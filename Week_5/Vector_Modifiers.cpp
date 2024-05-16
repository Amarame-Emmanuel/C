#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	// fill the array with 10 five times
	v.assign(5,10);
	cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	// inserts 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is: "<< v[n - 1];
	//prints the vector
	cout << "\nThe vector elements are: ";
	for (int i = 0; i<v.size(); i++)
		cout << v[i] << " ";
	//remove last element
	v.pop_back();
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	
	// inserts 5 to the beginning 
	v.insert(v.begin(), 5);
	
	cout << "\nv.insert(v.begin(), 5) The first element is: " << v[0];
	cout << "\nv.size() is: " << v.size();
    //	removes the first element
	v.erase(v.begin());
	
	cout << "\n v.erase(v.begin()) The first element is : " << v[0];
	cout << "\nv.size() is: " << v.size();
	// inserts at the beginning 
	v.emplace(v.begin(), 5);
	cout << "\n v.emplace(v.begin(),5) The first element is: " << v[0];
	cout << "\n v.emplace(v.size() is: " << v.size();
	//Inserts 20 at the end
	v.emplace_back(20);
	n = v.size();
	cout << "\n v.emplace_back(20) The last element is: " << v[n-1];
	
	//erases the vector
	v.clear();
	cout << "\n v.clear() Vector size after erase(): " << v.size();
	
	// two vector to perform swap
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
}