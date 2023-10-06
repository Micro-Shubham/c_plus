#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str, temp;
    cout << "Enter a string:";

    getline(cin, str);
    // string::reverse_iterator iter;
    temp = str;
    reverse(str.rbegin(), str.rend());
    cout << str << endl;
    if (temp == str)
    {
        cout << "Its a panlindrom ";
    }
    else
        cout << "Not a palindrom";

    return 0;
}