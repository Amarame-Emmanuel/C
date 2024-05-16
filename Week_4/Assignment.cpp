#include <iostream>
#include <algorithm>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

// Function to check if two strings are anagrams
bool areAnagrams(const string& str1, const string& str2) {
    string sortedStr1 = str1;
    string sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());
    return sortedStr1 == sortedStr2;
}

int main() {
    string input;

    // Get user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Check if the input is a palindrome
    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    // Check if the input is an anagram of a predefined string
    string predefinedString = "listen";
    if (areAnagrams(input, predefinedString)) {
        cout << input << " is an anagram of " << predefinedString << "." << endl;
    } else {
        cout << input << " is not an anagram of " << predefinedString << "." << endl;
    }

    return 0;
}
