/*
Heap memory is access a dynamically means the memory is allocated dynamically. The size of the memory required in
the heap is decided at run time not at compile time.
So mostly when we want to locate memory in heap we alloacte arrays, not just one integer or one float or one character
we will have arrays of character, arrays of floats, or arrays of integers.

Remember the concept of leak memory?





*/
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 3, 4, 5, 6}; // stack memory
    int *p;                     // heap memory
    p = new int[5];             // heap memory . assign of pointer in heap memory.
    A[2] = 15;
    p[2] = 1;
    cout << p[2];
    return 0;
}