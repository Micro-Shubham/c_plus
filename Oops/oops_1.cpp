#include <iostream>
using namespace std;
class rectangle
{
    // public
public:
    // data member
    int length, breadth;
    // function member
    int area()
    {
        return length * breadth;
    }
    // function member
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    // class is rectangle and object is r1 and r2
    rectangle r1, r2;
    // access length and breadth
    r1.length = 12;
    r1.breadth = 23;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    return 0;
}