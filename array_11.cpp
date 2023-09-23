#include <iostream>
using namespace std;
int main()
{
    int key, i, j, A[5];
    cout << "Enter the element of an array" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the key to be search" << endl;
    cin >> key;
    for (j = 0; j < 5; j++)
    {
        if (key == A[j])

            cout << "The searching key index number is:" << j << endl;
    }
    cout << "The searching key not found";
    return 0;
}