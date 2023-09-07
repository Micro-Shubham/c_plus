#include <iostream>
using namespace std;
int main()
{
    int height, base, area;
    cout << "Input the height and base ";
    cin >> height >> base;
    area = (height * base) / 2;
    cout << "The area of triagnle is " << area;
    return 0;
}