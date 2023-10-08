#include <iostream>
using namespace std;
int search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
            return i;
    }
    return 0;
}
int main()
{
    int A[] = {2, 4, 5, 6, 7, 8, 9};
    int k;
    cout << "Enter the element for searching ";
    cin >> k;
    int index = search(A, 7, k);
    cout << "searched element is at index number:" << index;
}