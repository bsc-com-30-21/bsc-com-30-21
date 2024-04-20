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
    
    // check the returned value from generateRandomNumber function and outputs the message 
    switch (randomDays)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 5:
        case 4:
        case 3:
        case 2:
            cout << "Your subscription will expire in " << randomDays << " days. Renew now and save 10%!" << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
        case 0:
            cout << "Your subscription has expired" << endl;
            break;
        case 11:
            cout << "You have an active subscription" << endl;
            break;
    }
}


int main() {
    // call outputMessage function to print message to the console
    outputMessage();
    return 0;
}
