#include <iostream>
using namespace std;
int main()
{
    // initializing and decalering
    char x = 'A';
    char S[10] = "hello"; // string is collection of charater and it is terminated with null character .
    // and array of size of 10 will create and character of hello will store in array.
    // After o the next index value  will store the value of null charater (\0) automatically.
    char A[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // make sure to store nulll character at last .
    cout << x << endl
         << S << endl
         << A << endl;
     
    return 0;
}