#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the N:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            cout << "The factor of  " << n << "  is  " << i << endl;
        }
    }
    cout << "The sum of factor is:" << sum << endl;
}