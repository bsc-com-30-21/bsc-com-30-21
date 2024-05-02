#include <iostream>
#include <string>

using namespace std;

int main() {
    // declare and intialize an array of string elements
    string elements[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // determine the size of the array
    int size = sizeof(elements) / sizeof(elements[0]);

    // iterate through each element
    for(int i = 0; i < size; ++i)
    {
        // check if the first character starts with letter B
        if (elements[i][0] == 'B') {
            // print the element to the console
            cout << elements[i] << endl;
        }   
    }
    
    return 0;
}
