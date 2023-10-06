#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Programming";
    string::reverse_iterator reverse;                              // accessing characeter in reverse order.
    for (reverse = str.rbegin(); reverse != str.rend(); reverse++) // rbegin() targeting to last index number and rend() target to first index number.
    {
        cout << *reverse << endl; // iterator act as pointer .
    }
    return 0;
}