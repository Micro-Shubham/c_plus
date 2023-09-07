#include <iostream>
using namespace std;
int main()
{
    float n, sum;
    cout << "Please input the number"; // finding the sum of first n natural number;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "The sum is " << sum;
    return 0;
}