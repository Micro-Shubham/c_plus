#include <iostream>
using namespace std;
int maximum(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > z)
        return y;
    else 
        return z;
}
int main()

{
    int a, b, c, d;
    cout << "Enter three number:";
    cin >> a >> b >> c;
    d = maximum(a, b, c);
    cout << "Maximum number is " << d;
    return 0;
}