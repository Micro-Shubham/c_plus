#include <iostream>
using namespace std;
int main()
{
    char x = 127; // char can store max value is 127.
    // if we try to increment that number we get the answer -128 by type casting . This is a concept of overflow .
    ++x;
    cout << (int)x; // herre we have use type casting to display the integer value of x after increment .
    return 0;
}