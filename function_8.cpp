#include <iostream>
using namespace std;
int max(int x, int y, int z = 0)
{
    return x > y && x > z ? x : y > z ? y
                                      : z;
}
int main()
{
    cout << max(32, 23); // this will work because we have already assign z as 0. So it will work
    // for both if argument has two or three parameter.this is the benefit of using default argumentation.
    return 0;
}