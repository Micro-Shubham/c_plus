#include <iostream>
using namespace std;
// functio template <class type>
template <class T>
// T will become integer data type for integer and flaot for flaot data type.
T max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    //::is  use to show that max is global.
    int y = ::max(4, 6);
    cout << y << endl;
    float x = ::max(5.6f, 2.5f);
    cout << x << endl;
    return 0;
}