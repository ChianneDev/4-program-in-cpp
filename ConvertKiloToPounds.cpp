#include <iostream>

// Program to convert weight in Kilo to pounds

using namespace std;

int main()
{
    float kilo = 0;
    float pounds = 2.2046;

    cout << "Type in the weight in Kilo: ";
    cin >> kilo;
    cout << "The weight in pounds is: " << kilo * pounds << endl;
};