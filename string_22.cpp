#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);
    cout << str.capacity() << endl;
    str.resize(20); // resize the capacity of class string . 
    cout << str.capacity();
    return 0;
}