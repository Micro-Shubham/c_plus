#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout << "Please input the values";
    cin >> a >> b >> c;
    float discriminent = b * b - 4 * a * c;
    if (discriminent >= 0)
    {
        r1 = (-b + sqrt(discriminent)) / (2 * a);
        r2 = (-b - sqrt(discriminent)) / (2 * a);
        cout << "The value of first root " << r1 << endl;
        cout << "The value of second root " << r2 << endl;
    }
    else
        cout << "The discriminent is not a real number" << endl;

    return 0;
}