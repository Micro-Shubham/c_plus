#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[10] = "345";
    char s2[10] = "34.4";
    long int x = strtol(s1, NULL, 10); // string to long int
    float y = strtof(s2, NULL);        // string to float .
    cout << x << endl;
    cout << y << endl;
    return 0;
}