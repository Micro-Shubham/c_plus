#include <iostream>
using namespace std;
int main()
{
    int *p = new int[20];

    delete[] p; // delete the old pointer to tackle from memory leak.

    p = new int[40]; // new int array will created with size of 40.
    // so we can change the size of array in heap memory but not in stack memory.
    // if we try to create a simple array that will store in stack memory and later we cannot increase or decrease the size of array.
    // thus pointer allow us to change the size of array .Named as dynamic allocation.
}