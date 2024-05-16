#include <iostream>
#include <algorithm>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string input1, input2;

    // Get user input for the first string
    cout << "Enter the first string: ";
    getline(cin, input1);

    // Check if the two strings are palindromes
    if (isPalindrome(input1) && isPalindrome(input2)) {
        cout << input1 << " is a palindromes." << endl;
    } else {
        cout << input1 << " is not palindromes." << endl;
    }

    return 0;
}
