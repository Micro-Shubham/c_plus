#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "pragramming";
    char s2[20] = "gram";
    cout << strstr(s1, s2); // substring
    // substring will find the enter string and print the remaining string.
    return 0;
}