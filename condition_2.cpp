#include <iostream>
using namespace std;
int main()
{
    int hours;
    cout << "Enter the time";
    cin >> hours;
    if (hours >= 9 && hours <= 18)
    {
        cout << "It's working hours";
    }
    else
    {
        cout << "It's leiser hours";
    }
    return 0;
}