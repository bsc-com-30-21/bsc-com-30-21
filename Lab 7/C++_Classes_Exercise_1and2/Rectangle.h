#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length; // Private member variable to store the length of the rectangle
    float width;  // Private member variable to store the width of the rectangle

public:
    //constructors
    Rectangle();
    Rectangle(float l, float w);
    ~Rectangle(); // Destructor declaration

    //method declarations
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;
    float calculateArea() const;
};

#endif // RECTANGLE_H
