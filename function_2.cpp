#include <iostream>
using namespace std;
// return type  funtion_name (parameter list).
int add(int x, int y)
{
    int c = x + y;
    return c;
}
int main()
{
    int a, b, c;
    cout << "Enter two number:";
    cin >> a >> b;
    // calling funtion and storing the result in c.
    c = add(a, b);
    cout << "The sum is:" << c;
    return 0;
}