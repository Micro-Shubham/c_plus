#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the 2 numbers";
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    cout << "GCD is " << n;
    return 0;
}