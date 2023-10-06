#include <iostream>
#include <string>
using namespace std;
int main()
{
    string email;
    cout << "enter the email:";
    cin >> email;
    int i = (int)email.find('@');
    string username = email.substr(0, i);
    cout << username << endl;
    return 0;
}
