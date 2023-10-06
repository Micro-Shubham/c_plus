#include <iostream>
#include <string>
#include <algorithm> // For reverse
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string original = str; // Store the original string
    reverse(str.begin(), str.end()); // Reverse the string

    if (original == str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
