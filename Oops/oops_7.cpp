#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
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
            length = 0;
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
    int primeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle r(10, 3); // pass some parameter.
    cout << r.area() << endl;
    cout << r.primeter() << endl;
}
