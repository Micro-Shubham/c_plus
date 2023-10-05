#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello world";
    cout << str.find_last_of('l'); //print the index of l from  right hand side.
    return 0;
}