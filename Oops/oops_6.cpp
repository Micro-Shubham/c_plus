#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;
    // non-parameterized constructor
public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
    // parameterized condructor
    rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 1;
    }
    void setbreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 1;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
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
    // class and object
    rectangle r1; // no parameter is passed so it it a non-parameterized constructor.
    cout << r1.area() << endl;
}