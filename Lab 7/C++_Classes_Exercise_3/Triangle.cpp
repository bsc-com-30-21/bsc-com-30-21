// Triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {} // Initialize base and height to 0 in the default constructor

    Triangle::Triangle(double b, double h) : base(b), height(h) {} // Initialize base and height to the provided values in the overloaded constructor

    Triangle::~Triangle() {} // Destructor

    double Triangle::getBase() const {
        return base; // Return the base of the triangle
    }

    double Triangle::getHeight() const {
        return height; // Return the height of the triangle
    }
}
