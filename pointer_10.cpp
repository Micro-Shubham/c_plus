#include <iostream>
using namespace std;
int main()
{
    int A[5] = {4, 5, 6, 7, 8};
    int *p = A;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
    return 0;
}