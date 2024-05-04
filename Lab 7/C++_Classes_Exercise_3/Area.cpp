// Area.cpp
#include "Area.h"
#include <cmath>

namespace shapes {
    double Area::calculateArea(const Square& square) {
        return square.getSideLength() * square.getSideLength(); // Calculate the area of the square
    }

    double Area::calculateArea(const Triangle& triangle) {
        return 0.5 * triangle.getBase() * triangle.getHeight(); // Calculate the area of the triangle
    }

    double Area::calculateArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius(); // Calculate the area of the circle
    }
}
