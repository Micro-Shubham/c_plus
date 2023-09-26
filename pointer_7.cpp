#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 5, 6, 7};
    int *p = A; // this will print value of only index value of 0.
    // to get rest value we will use loop and p++.
    for (int i = 0; i < 5; i++)
    {
        cout << *p << endl; //*p will print the value of A.
        p++;                // this will go to all the index value from 0 to rest.
    }
    return 0;
}