#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "pragramming";
    char s2[20] = "b";
    if (strstr(s1, s2) != NULL)
        cout << strstr(s1, s2); // substring

    // substring will find the enter string and print the remaining string.
    else
        cout << "not found";
    return 0;
}