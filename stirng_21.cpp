#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string :";
    getline(cin, str);
    // str.capacity() will print the size of internal created space.
    // this will change dynamically.
    cout << str.capacity();
    return 0;
}