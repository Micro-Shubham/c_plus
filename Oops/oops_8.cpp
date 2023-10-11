#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    rectangle()
    {
        length = 1;
        breath = 1;
    }
    rectangle(int l, int b)
    {
        setlength(l);
        setbreath(b);
    }
    rectangle(rectangle &r)
    {
        length = r.length;
        breath = r.breath;
    }
    void setlength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setbreath(int b)
    {
        if (b >= 0)
            breath = b;
        else
            breath = 0;
    }
    int getlength()
    {
        return length;
    }
    int getbreath()
    {
        return breath;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * length * breath;
    }
};

int main()
{
    rectangle r1(10,5);
    rectangle r2(r1);
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
}
