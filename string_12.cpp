#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "programming";

    cout << strchr(s1, 'g');//strchr similar to strstr.Only difference is that that work for string or char but this is only char.
    return 0;
}
