#include <iostream>
#include <random>

using namespace std;
int main() {
    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());
    
    // Define the distribution for random numbers between 0 and 11
    uniform_int_distribution<> dis(0, 11);
    
    // Generate and print 10 random numbers
    cout << "Random numbers between 0 and 11:" << endl;
    for (int i = 0; i < 10; ++i) {
        int random_number = dis(gen);
        cout << random_number << " ";
    }
    cout << endl;
    
    return 0;
}
