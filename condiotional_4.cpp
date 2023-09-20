#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age :";
    cin >> age;
    if (age <= 12 || age >= 50)
    {
        cout << "Eligible for perks ";
    }
    else
    {
        cout << "Not eligible for perks";
    }
    return 0;
}