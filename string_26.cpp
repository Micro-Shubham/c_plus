#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);
    str.append(" bye"); // add this word last of the entered string.
    cout << str << endl;
    return 0;
}