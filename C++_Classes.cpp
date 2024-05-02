#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
