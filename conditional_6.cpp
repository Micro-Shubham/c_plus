#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, discri;
    cout << "Enter the value of a,b,c";
    cin >> a >> b >> c;
    discri = b * b - 4 * a * c;
    if (discri == 0)
    {
        cout << "real and equal" << endl;
        int r1 = (-b + sqrt(discri)) / (2 * a);
        int r2 = (-b - sqrt(discri)) / (2 * a);
        cout << r1 << "  " << endl;
        cout << r2 << "  " << endl;
    }
    else
    {
        if (discri > 0)
        {
            cout << "real and unequal";
            int r1 = (-b + sqrt(discri)) / (2 * a);
            int r2 = (-b - sqrt(discri)) / (2 * a);
            cout << r2 << "  " << endl;
            cout << r1 << "  " << endl;
        }
        else
        {
            cout << "imginary ";
        }
    }
    return 0;
}