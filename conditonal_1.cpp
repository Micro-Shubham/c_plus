#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b";
    cin >> a >> b;
    if (a > b)
    {
        cout << "The maximum number is" << a << endl;
    }
    else
    {
        cout << "The maximum number is" << b << endl;
    }
    return 0;
}