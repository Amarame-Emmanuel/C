#include <iostream>
using namespace std;
 int main() {
 	string vowels[] = {"a","e","i","o","u"};
 	string consonant[] = {"b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","y","z"};
 	string plum;
 	cout << "Give input: " << endl;
 	cin >> plum ;
	//string lower = std::tolower(string plum);
 	
 	
 	for (int i = 0; i < 21; i++){
 		if (vowels[i] == plum )
 			cout << "It is a vowel" << endl;
 		else if (consonant[i] == plum)
 		cout << "It is a consonant"<< endl;
 			
	 }
 	
 }
 