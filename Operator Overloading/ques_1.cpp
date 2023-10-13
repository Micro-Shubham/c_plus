#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;
        return temp;
    }
    int getreal()
    {
        return real;
    }
    int getimaginary()
    {
        return imaginary;
    }
};
int main()
{
    Complex c1(3, 6), c2(4, 6), c3;
    c3 = c1 + c2;
    cout << c3.getreal() << "+i" << c3.getimaginary();
    return 0;
}