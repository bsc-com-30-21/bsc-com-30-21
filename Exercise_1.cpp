#include <iostream>
#include <random>

using namespace std;

int generateRandomNumber() {
    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());

    // Define the distribution for random numbers between 0 and 11
    uniform_int_distribution<> dis(0, 11);


    // Generate random numbers between 0 and 11
    int daysUntilExpiration = dis(gen);
    return daysUntilExpiration;
}

void outputMessage() {
    int randomDays = generateRandomNumber();

    if (randomDays <= 10 && randomDays > 5) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else if (randomDays <= 5 && randomDays > 1) {
        cout << "Your subscription will expire in " << randomDays << " days. Renew now and save 10%!" << endl;
    } else if (randomDays == 1) {
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else if (randomDays == 0) {
        cout << "Your subscription has expired" << endl;
    } else if (randomDays > 10) {
        cout << "You have an active subscription" << endl;
    }
}


int main() {
    outputMessage();
    return 0;
}
