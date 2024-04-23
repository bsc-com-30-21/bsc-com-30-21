#include <iostream>
using namespace std;

// calculates area of a square
int areaOfSquare(int length) {
    return length * length;
}

// calculates area of a rectangle
int areaOfRectangle(int width, int length) {
    return width * length;
}

// calculates area of a triangle
int areaOfTriangle(int width, int height) {
    return (width * height) / 2;
}


int main() {
    int i = 0;
    
    /*while (i < 5) {
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter selection: " << endl;

        if (input == 1) {
            int length;
            cout << "Enter length of the square" << endl;
            cin >> length;

            cout << "The area of the square is: " << areaOfSquare(length) << " cm" << endl;
        }else if (input == 2) {
            int width;
            int length;
            cout << "Enter width of the rectangle" << endl;
            cin >> width;
            cout << "Enter length of the rectangle" << endl;
            cin >> length;

            cout << "The area of the rectangle is: " << areaOfRectangle(width, length) << " cm" << endl;
        }else if (input == 3) {
            int width;
            int height;
            cout << "Enter width of the triangle" << endl;
            cin >> width;
            cout << "Enter height of the triangle" << endl;
            cin >> height;

            cout << "The area of the triangle is: " << areaOfTriangle(width, height) << " cm" << endl;
        }else if (input == 4) {
            break;
        }else if (input != 1 || input != 2 || input != 3 || input != 4) {
            cout << "Your input was: " << input << " which is an invalid input, Please enter a valid input!!!" << endl;
        }

        i++;
    } */


    for(int i = 0; i < 1000;) {
        int input;
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter selection: " << endl;
        cin >> input;

        if (input == 1) {
            int length;
            cout << "Enter length of the square" << endl;
            cin >> length;

            cout << "The area of the square is: " << areaOfSquare(length) << " cm" << endl;
        }else if (input == 2) {
            int width;
            int length;
            cout << "Enter width of the rectangle" << endl;
            cin >> width;
            cout << "Enter length of the rectangle" << endl;
            cin >> length;

            cout << "The area of the rectangle is: " << areaOfRectangle(width, length) << " cm" << endl;
        }else if (input == 3) {
            int width;
            int height;
            cout << "Enter width of the triangle" << endl;
            cin >> width;
            cout << "Enter height of the triangle" << endl;
            cin >> height;

            cout << "The area of the triangle is: " << areaOfTriangle(width, height) << " cm" << endl;
        }else if (input == 4) {
            break;
        }else if (input != 1 || input != 2 || input != 3 || input != 4) {
            cout << "Your input was: " << input << " which is an invalid input, Please enter a valid input!!!" << endl;
        }
        
        i++;
    }
    
    return 0;
}