#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the N:";
    cin >> n;                              //Number which diviable by 1 and itself is called prime number .
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ++count;
        }
    }
    if (count == 2)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number ";
    return 0;
}