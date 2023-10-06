#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Programming";
    // declaration of iterator
    string::iterator iter;
    for (iter = str.begin(); iter != str.end(); iter++) // str.begin() for begin of index and str.end() for last index.
    {
        cout << *iter << endl; // iterator act as pointer so to print those char use *iter.
    }
    return 0;
}