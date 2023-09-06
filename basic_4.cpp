#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Let me know your name ";
    getline(cin, name);//here getline is a funtion which take input more than one words . where cin take only one word.
    cout << "Welcome! " << name;
    return 0;
}