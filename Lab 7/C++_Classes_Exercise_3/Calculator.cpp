#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main() {
    char choice;
    
    // Loop until the user chooses to quit
    while (true) {
        // Display options to the user
        std::cout << "Choose an option:\n";
        std::cout << "1. Calculate the area of a square\n";
        std::cout << "2. Calculate the area of a triangle\n";
        std::cout << "3. Calculate the area of a circle\n";
        std::cout << "4. Quit\n";
        
        // Accept user's choice
        std::cin >> choice;

        // Perform action based on user's choice
        switch (choice) {
            case '1': {
                // For calculating the area of a square
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                // Create a square object with the provided side length
                shapes::Square square(side);
                // Calculate and display the area of the square
                std::cout << "Area of the square: " << shapes::Area::calculateArea(square) << std::endl;
                break;
            }
            case '2': {
                // For calculating the area of a triangle
                double base, height;
                std::cout << "Enter the base and height of the triangle: ";
                std::cin >> base >> height;
                // Create a triangle object with the provided base and height
                shapes::Triangle triangle(base, height);
                // Calculate and display the area of the triangle
                std::cout << "Area of the triangle: " << shapes::Area::calculateArea(triangle) << std::endl;
                break;
            }
            case '3': {
                // For calculating the area of a circle
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                // Create a circle object with the provided radius
                shapes::Circle circle(radius);
                // Calculate and display the area of the circle
                std::cout << "Area of the circle: " << shapes::Area::calculateArea(circle) << std::endl;
                break;
            }
            case '4':
                // If the user chooses to quit, exit the program
                std::cout << "Exiting program...\n";
                return 0;
            default:
                // Display a message for invalid choice
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
