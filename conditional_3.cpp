#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the value of age";
    cin >> age;
    if (age >= 12 && age <= 50)
    {
        cout << "Young";
    }
    else
    {
        cout << "Not young ";
    }
    return 0;
}