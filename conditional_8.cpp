#include <iostream>
using namespace std;
int main()
{
    int day_num;
    cout << "Enter the day number";
    cin >> day_num;
    if (day_num == 1)
    {
        cout << "Monday" << endl;
    }
    else if (day_num == 2)
    {
        cout << "tuesday" << endl;
    }
    else if (day_num == 3)
    {
        cout << "wednesday" << endl;
    }
    else if (day_num == 4)
    {
        cout << "Friday" << endl;
    }
    else if (day_num == 6)
    {
        cout << "Saturday" << endl;
    }
    else if(day_num==7)
    {
        cout << "Sunday" << endl;
    }
    else 
    {
        cout<<"invalid Number"<<endl;
    }
    return 0;
}