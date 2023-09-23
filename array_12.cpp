#include <iostream>
using namespace std;
int main()
{
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 35};
    int low = 0, high = 9, mid, key;
    cout << "Enter the key";
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            cout << "Key found at index value :" << mid;
            return 0;
        }
        else if (key >= A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Key not found";
    return 0;
}