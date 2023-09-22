#include <iostream>
using namespace std;
int main()
{
    int n, r, m, sum = 0;
    cout << "Enter the N:";
    cin >> n;
    m = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }
    if (m == sum)
        cout << "Armgstrong number ";
    else
        cout << "Not a amrgstrong number";
    return 0;
}