#include <iostream>
using namespace std;
template <class t>
// funtion template
t add(t x, t y, t z = 0)
// funtion default argument
{
    return x + y + z;
}

int main()
{
    int a = ::add(5, 6);
    cout << a << endl;
    int b = ::add(5, 6, 7);
    cout << b << endl;
    return 0;
}