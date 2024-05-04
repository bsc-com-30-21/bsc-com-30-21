// Main.cpp
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;

// Function to handle user's choice
void handleChoice() {
    char choice;
    
    // Loop until the user chooses to quit
    while (true) {
        // Display options to the user
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        
        cin >> choice;

        // Perform action based on user's choice
        switch (choice) {
            case '1': {
                // For calculating the area of a square
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;

                // Create a square object with the provided side length
                shapes::Square square(side);

                // Calculate and display the area of the square
                cout << "Area of the square: " << shapes::Area::calculateArea(square) << endl;
                break;
            }
            case '2': {
                // For calculating the area of a triangle
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;

                // Create a triangle object with the provided base and height
                shapes::Triangle triangle(base, height);

                // Calculate and display the area of the triangle
                cout << "Area of the triangle: " << shapes::Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': {
                // For calculating the area of a circle
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                // Create a circle object with the provided radius
                shapes::Circle circle(radius);
                
                // Calculate and display the area of the circle
                cout << "Area of the circle: " << shapes::Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                // If the user chooses to quit, exit the program
                cout << "Exiting program...\n";
                return;
            default:
                // Display a message for invalid choice
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Main function
int main() {
    // Call the function to handle user's choice
    handleChoice();
    return 0;
}
