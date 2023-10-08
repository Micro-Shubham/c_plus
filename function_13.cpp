#include <iostream>
using namespace std;
// return by reference.
int &fun(int &a)
{

    cout << a << endl;
    return a;
}

int main()
{
    int x = 10;
    int y = fun(x);
    cout << y << endl;
    return 0;
}