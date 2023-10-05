#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello world";
    cout << str.find_first_of('l'); // print the index of l from left hand side.
    return 0;
}