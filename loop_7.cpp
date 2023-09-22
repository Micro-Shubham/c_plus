#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the N:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "factor of  " << n << " is  " << i<< endl;
        }
    }
    return 0;
}