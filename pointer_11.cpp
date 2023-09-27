/*
Problem using pointer
1. uninitialised pointer.
2. memory leak.
3. dangling pointer: pointer was initialised but now deallocated or deleted.
*/

// reference
/*
main()
int x=10;
int &y=x;       this y is alias or nickname of x. also x and y both belong to same location.
this is a known as reference.
*/
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    cout << x << endl;
    cout << y << endl; // both x and y represent the same location which hold the value 10.
    x++;               // value of x will increment by 1.
    cout << x << endl;
    cout << y << endl;
    y++;
    cout << y << endl;
    cout << x << endl;
    // output of both are same because x and y both are same .hence this is known as reference .
    return 0;
}
