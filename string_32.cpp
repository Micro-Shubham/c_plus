#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Welcome";
    char s[10];
    // copy str to s and add null terminator.
    str.copy(s, str.length()); // str copied in char array s.
    s[str.length()] = '\0';    // null terminator to the end of copied string to ensure it treated as valid.
    cout << s;

    return 0;
}