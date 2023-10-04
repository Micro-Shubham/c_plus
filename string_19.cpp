#include <iostream>
#include <string>
using namespace std;
int main()
{
    // declaration
    string str;
    cout << "Enter a class string ";
    getline(cin, str);
    // read the whole input.
    cout << str << endl;
    cout << str.length();
    // print the length of class string.

    return 0;
}