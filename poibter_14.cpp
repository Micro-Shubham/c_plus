#include <iostream>
using namespace std;
int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}
int main()
{
    int (*function_pointer)(int, int);
    function_pointer = max; // this pointer has assign for the max .same pointer but different funtion.
    int max_result = (*function_pointer)(19, 6);
    cout << "Max value is:" << max_result << endl;
    function_pointer = min; // same pointer will work for the min .same pointer but different funtion.
    int min_result = (*function_pointer)(23, 5);
    cout << "Min value is :" << min_result << endl;
    return 0;
}
// same pointer but different funtion this condition is known as polymorphism. also it term to be funtion over writing.