#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "How are you";
    cout << str.rfind('o'); // rfind will start find the string from right hand side.
    return 0;
}