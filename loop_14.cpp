#include <iostream>
using namespace std;
int main()
{
    int n, palindrom = 0, temp;
    cout << "Enter the N:";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        palindrom = palindrom * 10 + r;
    }
    if (palindrom == temp)
        cout << "Its a Palindrom number " << palindrom << endl;
    else
        cout << "Not a palindrom number " << palindrom << endl;
    return 0;
}