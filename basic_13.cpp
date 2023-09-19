#include <iostream>
using namespace std;
enum day
{
    mon, // we can give value to these like mon=10 so it will start increament from here.
    tue,
    wed,
    thru,
    fri,
    sat,
    sun
};         // enum is a user define data type .
int main() // mon has value 0 and rest are in increament way.
{
    day d; // here day is a data type .
    d = mon;
    cout << tue;
    return 0;
}
