#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello";
    cout << str.insert(3, "bye"); // insert bye at index 3 and rest char will move to forward index.
    return 0;
}