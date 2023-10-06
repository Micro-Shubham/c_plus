#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cout << "Enter a string :";
    getline(cin, str);
    string::iterator iter;
    for (iter = str.begin(); iter != str.end(); iter++)
    {
        count++;
    }
    cout << count << " is the length of string";
    return 0;
}