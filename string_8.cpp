#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int b = 30;
    char *s = new char[b]; // allocate the memory for string
    cout << "Enter the string";
    cin.getline(s, 30);
    cout << "Length of string is :" << strlen(s);
    delete[] s;
    // don't forget to deallocate the dynamically allocated memory.
    return 0;
}