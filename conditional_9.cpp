#include <iostream>
using namespace std;
int main()  //Conept of short circuit
{
    int a = 10, b = 5, i = 5;   
    if (a > b || ++i < b)
    {
    }
    cout << i;
    return 0;
}
//if we use the and condition , if one statement is false it will not check the second condition.This is known as short circuit.
//In case of or if first statement is correct it will not check the second one .