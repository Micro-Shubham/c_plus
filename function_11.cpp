#include <iostream>
using namespace std;
int value(int &a, int &b) // call by reference.
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 33;
    value(x, y);
    cout << x << "  " << y;
    return 0;
}