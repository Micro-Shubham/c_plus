#include <iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3;
    float average;
    cout << "Enter the obtained marks ";
    cin >> marks1 >> marks2 >> marks3;
    average = (marks1 + marks2 + marks3) / 3.0;
    if (average > 60)
    {
        cout << "A" << endl;
    }
    else
    {
        if (average >= 35 && average <= 60)
            cout << "B"<<endl;
        else
            cout << "C"<<endl;
    }
    return 0;
}