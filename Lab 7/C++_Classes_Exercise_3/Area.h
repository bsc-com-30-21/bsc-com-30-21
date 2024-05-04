// Area.h
#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static double calculateArea(const Square& square); // Static method to calculate the area of a square
        static double calculateArea(const Triangle& triangle); // Static method to calculate the area of a triangle
        static double calculateArea(const Circle& circle); // Static method to calculate the area of a circle
    };
}

#endif // AREA_H
