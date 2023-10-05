#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);
    cout << str.capacity() << endl;
    str.append(" bye"); // add this word last of the entered string.
    cout << str << endl;
    cout << str.capacity() << endl;
    return 0;
}