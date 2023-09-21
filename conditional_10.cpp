#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 20;
    // int c=a+b; //this declearation will remain for wholle program and it will occupy space in stack memory .
    {
        int c = a + b; // by declearing this way puttin a bracket and then if conditinal statement. T
        // c deleared only here so after the use of if condition the space occupied in stack memory the space will deleate for c.
        // this is known as dynamic decleration .So we can perform the task by taking less space.

        if (c > 10)
        {
            cout << c << endl; // So im using c only here .
        }
    }
    return 0;
}