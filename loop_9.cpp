#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the N:";
    cin >> n;
    for (int i = 1; i < n; i++)  //A number whose sum of its factor is equal to the number is called perfect number .
    {
        if (n % i == 0)
        {
            cout << "The factor of " << n << " is " << i << endl;
            sum += i;
        }
    }
    if (sum == n)

        cout << "This is a perfect number " << endl;

    else
        cout << "This is not a perfect number " << endl;
    return 0;
}