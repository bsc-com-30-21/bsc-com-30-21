// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius; // Private member variable to store the radius of the circle
    public:
        Circle(); // Default constructor
        Circle(double r); // Overloaded constructor
        ~Circle(); // Destructor
        double getRadius() const; // Accessor method to get the radius of the circle
    };
}

#endif // CIRCLE_H
