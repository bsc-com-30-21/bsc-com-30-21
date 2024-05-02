// writing  ona text file
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream myfile("examplefile.txt");

    if (myfile.is_open()) {
        myfile << "this is a line.\n";
        myfile << "this is another line.\n";
        myfile.close();
    } else {
        cout << "unable to open file";
    }

    return 0;
}
