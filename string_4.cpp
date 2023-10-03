#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout << "Enter the character ";
    // input is steve jobs but it will print only steve .this cin take ony one word as input.
    //  cin >> s;
    // To take whole sentence as input.And print all of them.
    cin.get(s, 20);

    cout << "Name is " << s;
    return 0;
}