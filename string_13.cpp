#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "Hello";
    char s2[20] = "Hello";
    cout << strcmp(s1, s2);//compare string .
    //if s1 comes first it will give -1.
    //if s1 comes after it will give +1.
    //if both are equal it will give 0.
    return 0;
}