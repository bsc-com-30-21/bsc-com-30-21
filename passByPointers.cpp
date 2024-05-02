#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void SwapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl; // varA is 25
    cout << "varB before swap: " << varB << endl; // varB is 100

    // Call SwapNumbers function passing addresses of varA and varB
    SwapNumbers(&varA, &varB);

    cout << "varA after swap: " << varA << endl; // varA is 100
    cout << "varB after swap: " << varB << endl; // varB is 25

    return 0;
}
