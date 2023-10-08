#include <iostream>
using namespace std;
int funt()
{
    static int a = 10;
    a++;
    cout << a << endl;
}
int main()
{
    funt();
    funt();
    return 0;
}