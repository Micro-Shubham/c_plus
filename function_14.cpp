#include <iostream>
using namespace std;
int g = 0; // gloabl variable
int fun()
{
    int a = 5; // local variable 
    g = g + a;
    return g;
}
int main()
{
    g = 15;
    fun();
    g++;
    cout << g << endl;
    return 0;
}