#include <iostream>
using namespace std;
int main()
{
    char s[20];
    char s2[20];
    cout << "Enter the character:";
    cin.getline(s, 20);
    cout << s << endl;
    cout << "Enter the character again:";
    cin.getline(s2, 20);
    cout << s2 << endl;
    return 0;
}