#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello";
    cout << str.insert(4, "apple", 2); // insert(index,"char",digit to insert).
    return 0;
}