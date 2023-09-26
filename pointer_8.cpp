#include <iostream>
using namespace std;
int main()
{
    int A[5] = {3, 4, 6, 6, 2};
    int *p = A;
    for (int i = 0; i < 5; i++)
    {
        cout << p << endl;
        cout << *p << endl;
        p++;
    }
    return 0;
}