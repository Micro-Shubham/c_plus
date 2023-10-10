#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    // rectanle class is now a stored in heap memory
    rectangle *p = new rectangle();
    // p stored in stack and it will declaring the value of length and breadth value which is stored in heap memory
    p->length = 10;
    p->breadth = 20;
    cout << "Area is " << p->area();
    return 0;
}