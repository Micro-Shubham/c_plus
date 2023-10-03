#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s[30];
    cout << "Enter the string:";
    cin.getline(s, 30);
    // length of string.Include header file #include<cstring>
    cout << strlen(s) << endl;
    return 0;
}