// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base; // Private member variable to store the base of the triangle
        double height; // Private member variable to store the height of the triangle
    public:
        Triangle(); // Default constructor
        Triangle(double b, double h); // Overloaded constructor
        ~Triangle(); // Destructor
        double getBase() const; // Accessor method to get the base of the triangle
        double getHeight() const; // Accessor method to get the height of the triangle
    };
}

#endif // TRIANGLE_H
