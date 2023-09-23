#include <iostream>
using namespace std;
int main()
{
    int i, max, A[5];
    cout << "Enter the element of array ";
    for (i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    max = A[0];
    for (int j=1;j<5;j++)
    {
        if (max <A[j])
        {
            max = A[j];
        }
    }
    cout << "The maximum element of array is :" << max;
    return 0;
}