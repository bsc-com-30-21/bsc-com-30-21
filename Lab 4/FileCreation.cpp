#include <fstream>
using namespace std;

int main() {
    //create and open a text file

    ofstream Myfile("examplefile.txt");

    //close the file
    Myfile.close();

    return 0;
}