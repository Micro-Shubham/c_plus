#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "How you";
    cout << str.insert(3, " are",4); // insert(index,"char",digit to insert).
    return 0;
}