#include "Rectangle.h"

//constructors
Rectangle::Rectangle() : length(0.0), width(0.0) {};

Rectangle::Rectangle(float l, float w) : length(l), width(w) {};

Rectangle::~Rectangle() {};

// Setter method for setting the length of the rectangle
void Rectangle::setLength(float l) {
    length = l;
}

// Setter method for setting the width of the rectangle
void Rectangle::setWidth(float w) {
    width = w;
}

// Getter method for retrieving the length of the rectangle
float Rectangle::getLength() const {
    return length;
}

// Getter method for retrieving the width of the rectangle
float Rectangle::getWidth() const {
    return width;
}

// Method to calculate and return the area of the rectangle
float Rectangle::calculateArea() const {
    return length * width;
}
