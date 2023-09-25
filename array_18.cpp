#include <iostream>
using namespace std;
int main()
{
    int A[4][4], B[4][4], C[4][4];
    cout << "Enter the element of Matrix A:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the element of Matrix B:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "The sum of Matrix A and B:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}