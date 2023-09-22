#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the N:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        cout<<n<<"X"<<i<<"="<<fact<<endl;
    }
    // cout << "The factorial is:" <<fact<< endl;
    return 0;
}