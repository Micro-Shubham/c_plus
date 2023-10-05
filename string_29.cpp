#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello how are you?";
    cout << str.replace(0, 5, "brother"); // replace char from entered index.
    return 0;
}