#include <iostream>
using namespace std;
int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < 5; i++)
    {
        p[i] = 5 * i;
    }
    cout << p << endl;
    return p;
}
int main()
{
    // Address of p and q is same .
    // return by address.
    int *q = fun(5);
    cout << q << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }
    return 0;
}
