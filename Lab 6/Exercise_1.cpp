#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* pointerInt = new int;

    // Dynamically allocate a string
    string* pointerStr = new string;

    // Prompt user to enter an integer
    cout << "Enter integer: ";
    cin >> *pointerInt;

    // Prompt user to enter a value for the dynamically allocated string
    cout << "Enter string: ";
    cin.ignore(); // Ignore newline character left in the input buffer
    getline(cin, *pointerStr);

    // Output the value of the allocated integer
    cout << "Value of the dynamically allocated integer: " << *pointerInt << endl;

    // Output the value of the allocated string
    cout << "Value of the dynamically allocated string: " << *pointerStr << endl;

    // Deallocate memory for the allocated integer
    delete pointerInt;

    // Deallocate memory for the allocated string
    delete pointerStr;

    return 0;
}
