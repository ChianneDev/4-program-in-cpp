#include <iostream>

using namespace std;

// Program to convert pounds to US dollars
int main()
{
    double pounds, dollars = 1.23;

    cout << "Type in money you have in pounds £";
    cin >> pounds;
    cout << "The money that you exchanged to US dollars is $" << pounds * dollars << endl;
}