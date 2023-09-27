#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x; // reference
    // Note: reference does not consume any memory .
    // because y denote the location of x.
    // we cannot use y reference for any other variable once it has declare for x.
    int a;
    a = x;  // here the data of x will assign
    x = 23; // this 23 will earse the data stored in x and new value will assign as 23.
    // x left here x denote the address.
    cout << a << endl;
    cout << x << endl;
    cout << y;
    return 0;
}