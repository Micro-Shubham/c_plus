#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    p[0] = 3;
    p[2] = 5;
    cout << p[0] << endl;
    delete[] p;  // if i don't have any use of the pointer which has occupy space in heap memory .This is how we can delete it.
    p = nullptr; // this also include include the deletaion of pointer in heap memory.
    return 0;
}