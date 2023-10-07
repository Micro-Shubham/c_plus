#include <iostream>
using namespace std;
int value(int x, int y) // formal parameter.
{
    int temp = x;
    x = y;
    y = temp;
    return x, y;
}
int main()
{
    int x = 10, y = 20; // actual parameter .
    value(x, y);
    cout << x << " " << y;
    return 0;
}
// Any change done in formal parameter will not affect the actual parameter.
// This is call by value  parameter. we cannot use swap  to be done in call by value parameter.