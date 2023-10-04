#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "x=10;y=20;z=25";
    char *token = strtok(s1, ";"); // tokenniser
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ";");
    }
    return 0;
}