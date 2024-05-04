// Square.cpp
#include "Square.h"

namespace shapes {
    Square::Square() : side_length(0) {} // Initialize side_length to 0 in the default constructor

    Square::Square(double side) : side_length(side) {} // Initialize side_length to the provided value in the overloaded constructor

    Square::~Square() {} // Destructor

    double Square::getSideLength() const {
        return side_length; // Return the side length of the square
    }
}
