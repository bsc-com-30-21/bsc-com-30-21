#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    float length, width;
    cout << "Enter length of first rectangle: ";
    cin >> length;
    cout << "Enter width of first rectangle: ";
    cin >> width;

    Rectangle rect1; // Create first instance of Rectangle class using default constructor
    rect1.setLength(length); // Set length
    rect1.setWidth(width); // Set width

    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    // Create second instance of Rectangle class using overloaded constructor
    cout << "Enter length of second rectangle: ";
    cin >> length;
    cout << "Enter width of second rectangle: ";
    cin >> width;

    Rectangle rect2(length, width); // Initialize with overloaded constructor

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}

