#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string :";
    getline(cin, str);
    cout << "Length of a string is:" << str.length();
    return 0;
}