#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello";
    char s[10];
    str.copy(s, 2); // copy only 2 index.
    s[2] = '\0';
    cout << s;
    return 0;
}