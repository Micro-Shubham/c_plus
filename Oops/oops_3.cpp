#include <iostream>
using namespace std;
// class names is rectangle
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
    rectangle r;
    // pointer to class
    rectangle *p;
    p = &r;         // address of r stored in p
    p->length = 10; // dereferencing
    p->breadth = 30;
    cout << "Area is " << p->area() << endl;
    cout << "Perimeter is " << p->perimeter() << endl;
    return 0;
}
