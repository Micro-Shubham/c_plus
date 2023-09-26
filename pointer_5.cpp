#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array";
    cin >> size;
    int A[size];
    cout << sizeof A << endl; // sizeof A will display the how much byte this array will take.
    return 0;
}