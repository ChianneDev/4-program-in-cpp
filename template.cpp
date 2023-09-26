#include <iostream>

using namespace std;
int main()
{
    float firstNumber = 0;
    float secondNumber = 0;
    float answer = 0;

    // ask user to type in the first number
    cout << "Type in the first number : ";

    // get the first number
    cin >> firstNumber;

    // ask the user to type in the second number
    cout << "Type in the second number : ";

    // get the second number
    cin >> secondNumber;

    // calculate the total
    answer = firstNumber / secondNumber;

    // display the answer
    cout << "the answer is " << answer << "\n";
}