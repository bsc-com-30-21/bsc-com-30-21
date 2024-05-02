#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;

    // Open file for reading
    ifstream myfile("examplefile.txt");

    if (myfile.is_open()) {
        // Read and print each line
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        // Close the file after reading
        myfile.close();
    } else {
        cout << "Unable to open file";
    }

    return 0;
}
