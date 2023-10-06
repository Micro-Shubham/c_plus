#include <iostream>
#include <string>
using namespace std;
int main()
{
    string std;
    cout << "Enter a upper case string:";
    getline(cin, std);
    string::iterator iter;
    for (iter = std.begin(); iter != std.end(); iter++)
    {
        *iter=*iter+32;
        
    }
    cout << std;
    return 0;
}