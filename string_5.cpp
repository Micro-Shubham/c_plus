#include <iostream>
using namespace std;
int main()
{
    char s[20];
    char s2[20];
    cout << "Enter the name: ";
    cin.get(s, 20);
    cout << "Welcom " << s << endl;
    cout << "Enter again" << endl;
    cin.get(s2, 20); // whitespace will taken as input and it will not ask  to enter any input again.
    cout << "Welcome bhai" << s2;
    return 0;
}