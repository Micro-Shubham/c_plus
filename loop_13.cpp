#include <iostream>
using namespace std;
int main()
{
    int n, new_number = 0;
    cout << "Enter the N:";
    cin >> n;
    while (n != 0)
    {
        int reverse = n % 10;
        n = n / 10;
        new_number = new_number * 10 + reverse;
    }
    cout << "The reverse number of " << n << " is " << new_number;
    return 0;
}