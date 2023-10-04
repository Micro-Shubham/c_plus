#include <iostream>
#include <string>
using namespace std;
int main()
{
    // declaration
    string str;
    cout << "Enter a string:";
    // read whole input
    getline(cin, str);
    cout << str;
    return 0;
}