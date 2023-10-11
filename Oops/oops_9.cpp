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
}