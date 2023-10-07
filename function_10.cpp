#include <iostream>
using namespace std;
int value(int *a, int *b) // formal parameter
{
    int temp = *a; // call by address
    *a = *b;
    *b = temp;
    return *a, *b;
}
/* Any changes made in formal parameter will be copy in actual paramter.

a  and b is now a pointer which store the value of x and y from their address.

*/
int main()

{
    int x = 10, y = 23; // actual parameter
    value(&x, &y);      // calling funtion with passing the address of x and y.
    cout << x << " " << y;
    return 0;
}