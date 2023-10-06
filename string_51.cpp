#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string std;
    cout << "Enter a string:";
    getline(cin, std);
    for (int i = 0; std[i] != '\0'; i++)
    {
        count++;
    }
    cout << count << " is the length of string";
    return 0;
}