// Circle.cpp
#include "Circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {} // Initialize radius to 0 in the default constructor

    Circle::Circle(double r) : radius(r) {} // Initialize radius to the provided value in the overloaded constructor

    Circle::~Circle() {} // Destructor

    double Circle::getRadius() const {
        return radius; // Return the radius of the circle
    }
}
