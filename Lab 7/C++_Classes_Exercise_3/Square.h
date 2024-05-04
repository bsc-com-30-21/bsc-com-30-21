// Square.h
#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double side_length; // Private member variable to store the side length of the square
    public:
        Square(); // Default constructor
        Square(double side); // Overloaded constructor
        ~Square(); // Destructor
        double getSideLength() const; // Accessor method to get the side length of the square
    };
}

#endif // SQUARE_H
