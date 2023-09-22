#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the N:";
    cin >> n;
    int i = 1;
    while (n != 0)
    {
        int reverse = n % 10;
        i = n = n / 10;

        cout << reverse;
    }
    return 0;
}