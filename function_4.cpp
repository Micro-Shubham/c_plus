#include <iostream>
using namespace std;
int add(int x, int y) // using add function name again and again
                      // is called as function overloading.
{ // we can use same function in c++ but not in c.
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}
float add(float x, float y)
{
    return x + y;
}
int main()
{
    int a = 20, b = 34, c;
    c = add(a, b);
    cout << "Addition of two number is:" << c << endl;
    int d = add(a, b, c);
    cout << "Addition of three number is:" << d << endl;
    float j = 3.4, k = 4.5;
    float l = add(j, k);
    cout << "Addition of two float number is:" << l << endl;
    return 0;
}