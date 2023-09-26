#include <iostream>
using namespace std;
int main()
{
    int A[5] = {5, 4, 5, 6, 7};
    int *p = A;
    for (int i = 0; i < 3; i++)
    {
        cout << *p << endl;
        p = p + 2; // this will move two step forward .p store the location of array A.
    }
    return 0;
}