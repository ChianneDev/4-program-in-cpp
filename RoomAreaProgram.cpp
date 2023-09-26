#include <iostream>

// Program to calculate the area
using namespace std;
int main()
{
    float length = 0;
    float width = 0;
    float roomArea = 0;

    // ask user to type in the length of the room
    cout << "Type in the length of the room : ";

    // get the length of the room
    cin >> length;

    // ask the user to type in the width of the room
    cout << "Type in the width of the room : ";

    // get the width of the room
    cin >> width;

    // calculate the area of the room
    roomArea = length * width;

    // display the area of the room
    cout << "The area of the room is " << roomArea << " m^2"
         << "\n";
}