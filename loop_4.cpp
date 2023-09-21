#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the N:";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        k = i * n;
        cout << n << "X" << i << "=" << n * i << endl;
    }
    return 0;
}