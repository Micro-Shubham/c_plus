#include <iostream>
using namespace std;
int main()
{
    int x = 5;         // data variable.
    int *p;            // address variable.
    p = &x;            // p will store the address of variable x in p.
    cout << p << endl; // printing the p which give the address of variable x.And this p will also take some occupy some space.

    cout << x << endl; // printing the value of x.
    cout << &x;        // this can also print the address of variable x.
    return 0;
}
// Now pointer is a variable which is used for  storing  the address of data .