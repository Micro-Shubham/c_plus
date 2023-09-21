#include <iostream>
using namespace std;
int main()
{
    int bill_amount;
    cout << "Enter the bill amount \n";
    cin >> bill_amount;
    if (bill_amount < 100)
    {
        cout << "No any discount " << endl;
        cout << bill_amount << endl;
    }
    else if (bill_amount >= 100 && bill_amount < 500)
    {
        float discount = (bill_amount * 10) / 100;
        cout << "Bill amount is :" << bill_amount
             << endl;
        cout << "Discount is :" << discount
             << endl;
    }
    else
    {
        float discount = (bill_amount * 20) / 100;
        cout << "Bill amount is:" << bill_amount
             << endl;
        cout << "Discount is :" << discount
             << endl;
    }
    return 0;
}