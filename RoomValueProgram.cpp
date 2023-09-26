#include <iostream>

// Program to calculate the volume of the box
using namespace std;
int main()
{
    float length = 0;
    float width = 0;
    float height = 0;
    float roomVolume = 0;

    // ask user to type in the length of the box
    cout << "Type in the length of the room : ";

    // get the length of the box
    cin >> length;

    // ask the user to type in the width of the box
    cout << "Type in the width of the room : ";

    // get the width of the box
    cin >> width;

    // ask the user to type in the height of the box
    cout << "Type in the height of the room : ";

    // get the height of the box
    cin >> height;

    // calculate the area of the box
    roomVolume = length * width * height;

    // display the area of the box
    cout << "The volume of the box is " << roomVolume << " m^3"
         << "\n";
}