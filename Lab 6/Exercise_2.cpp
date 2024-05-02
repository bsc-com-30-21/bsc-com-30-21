#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // allocate a 2 Dimension array
    cout << "Enter the number of rows: ";
    cin >> rows;
    if (rows > 3 || rows <= 0) {
        cout << "Invalid input. Number of rows must be between 1 and 3." << endl;
        return 1;
    }
    

    cout << "Enter the number of columns : ";
    cin >> cols;
    if (cols > 3 || cols <= 0) {
        cout << "Invalid input. Number of columns must be between 1 and 3." << endl;
        return 1;
    }

    // allocate the 2 Dimension array
    double** multDArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        multDArray[i] = new double[cols];
    }

    // Assign values to each element of the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> multDArray[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Array elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << multDArray[i][j] << " ";
        }
        cout << endl;
    }

    // delete allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] multDArray[i];
    }
    delete[] multDArray;

    return 0;
}
