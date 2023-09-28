#include <iostream>
using namespace std;
void display()
{
    cout << "Hello there!";
}
int main()
{
    void (*funtion_pointer)(); // declare funtion pointer to take no arrgument and return void.
    funtion_pointer = display; // assign address of the display funtion to the pointer.
    (*funtion_pointer)();      // call the funtion through the pointer.

    return 0;
}