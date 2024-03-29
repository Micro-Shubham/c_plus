#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // constructors
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);
    // mutator
    int getlength();
    int getbreadth();
    // accessor
    void setlength(int l);
    void setbreadth(int b);
    // facilatator
    int area();
    int perimeter();
    // enquary
    bool isSquare();
    // destructor
    ~rectangle();
};
int main()
{
    rectangle r1(10, 10);
    cout << "Area " << r1.area() << endl;
if (r1.isSquare())
        cout << "yes" << endl;
}
// soope resoltuion
rectangle ::rectangle()
{
    length = 1;
    breadth = 1;
}
rectangle ::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
rectangle ::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void rectangle::setlength(int l)
{
    length = l;
}
void rectangle ::setbreadth(int b)
{
    breadth = b;
}
int rectangle ::area()
{
    return length * breadth;
}
int rectangle ::perimeter()
{
    return 2 * (length + breadth);
}
bool rectangle ::isSquare()
{
    length == breadth;
}
rectangle::~rectangle()
{
    cout << "Rectangle destroyed";
}
