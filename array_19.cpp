#include <iostream>
using namespace std;
int main()
{
    int A[2][2], B[2][2], C[2][2];
    cout << "Enter the element of matrix A:\n";
    for (int i = 0; i < 2; i++) // taking input for matrix A.
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the element of matrix B:\n";
    for (int i = 0; i < 2; i++) // taking input for matrix B.
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Maltiplication of matrix A and B" << endl;
    for (int i = 0; i < 2; i++) // multiplying matrix A and B.Also assigning its value in matrix C.
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    for (int i = 0; i < 2; i++) // printing matrix C.
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}