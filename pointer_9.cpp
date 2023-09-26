#include <iostream>
using namespace std;
int main()
{
    int A[5] = {5, 4, 5, 6, 7};
    int *p = A;
    p = p + 2;
    cout << p << "  " << *p;

    return 0;
}