#include <iostream>
using namespace std;
int main()
{
    int x = 5;         // data variable.
    int *p;            // address variable.To pointer is declared by using star(*).
    p = &x;            // p will store the address of variable x in p.And(&) sign is used with the variable to initialize the address of that variable.
    cout << p << endl; // printing the p which give the address of variable x.And this p will also take some occupy some space.

    cout << x << endl;  // printing the value of x.
    cout << &x << endl; // this can also print the address of variable x.
    cout << &p << endl; // this will print the address of p.
    cout << *p << endl; // this print the value of x which is stored in p . this is called as dereferencing.

    return 0;
}
// Now pointer is a variable which is used for  storing  the address of data .