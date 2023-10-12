#include <iostream>
using namespace std;
class Student
{
private:
    int Roll_no;
    string name;
    int mathsmarks;
    int physicsmarks;
    int chemmarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        Roll_no = r;
        name = n;
        mathsmarks = m;
        physicsmarks = p;
        chemmarks = c;
    }
    int total()
    {
        return mathsmarks + physicsmarks + chemmarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};
int main()
{
    int Roll_no;
    string name;
    int m, p, c;
    cout << "Enter the roll number: " << endl;
    cin >> Roll_no;
    cout << "Enter the student name: " << endl;
    cin >> name;
    cout << "Enter the marks of maths ,physica and chemistry:" << endl;
    cin >> m >> p >> c;
    Student s(Roll_no, name, m, p, c);
    cout << "Total marks:" << s.total() << endl;
    cout << "Grade:" << s.grade() << endl;
}