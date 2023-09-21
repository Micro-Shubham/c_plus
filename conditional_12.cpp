#include <iostream>
using namespace std;
int main()
{
    cout << "Menu\n";
    cout << "1. Add\n"
         << "2. Substract\n"
         << "3. Multiply\n"
         << "4. Division\n";
    int option;
    cout << "Enter the option\n";
    cin >> option;
    int a, b, c;
    cout << "Enter the bill amount \n ";
    cin >> a >> b;
    switch (option)

    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        cout << "Invalid input";
    }
    cout << "The bill amount is :" << c;
    return 0;
}