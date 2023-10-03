#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[30] = "Good morning";
    char s2[20] ;
    strcpy(s2, s1);
    cout << s2;
    return 0;
}