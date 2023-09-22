#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, reverse2 = 0;
    cout << "Enter the N:";
    cin >> n;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
    }
    while (reverse > 0)
    {
        int r = reverse % 10;
        reverse = reverse / 10;

        switch (r)
        {
        case 1:
            cout << "ONe " << endl;
            break;
        case 2:
            cout << "Two " << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        case 0:
            cout << "Zero" << endl;
            break;
        }
    }
    return 0;
}