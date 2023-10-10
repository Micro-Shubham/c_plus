#include <iostream>
using namespace std;
class rectangle
{
    // making private so the user cannot disturnb data member.
private:
    int length;
    int breadth;
    // function member as public

public:
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    // accessor
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength()
    {

        return length;
    }
    // mutator
    int getBreadth()
    {
        return breadth;
    }
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
    // class rectangle and object r
    rectangle r;
    // calling function member to get the value of length and breadth
    r.setLength(10);
    r.setBreadth(5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    return 0;
}