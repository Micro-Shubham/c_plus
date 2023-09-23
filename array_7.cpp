#include <iostream>
using namespace std;
int main()
{
    int A[] = {3, 6, 8, 2, 1};
    for (int x : A) // declearing x for each element of A;
    // This loop is know as for each loop;
    {

        cout << x << endl;
    }
    return 0;
}