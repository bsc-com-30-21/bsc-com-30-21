#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    Person Jane(68.0f);  // Create Person "Jane" with weight 68.0f
    Person John(70.0f);   // Create Person "Joe" with weight 70.0f
    float totalWeight;

    totalWeight = Jane + John;
    cout << "Total weight of Jane and Joe is: " << totalWeight << " kg" << endl;

    if (Jane == John) {
    cout << "This is the same person" << endl;
    }

    if (Jane != John) {
    cout << "This is NOT the same person" << endl;
    }
    

    if (Jane < John) {
    cout << "Jane is younger than John" << endl;
    }

    if (John > Jane) {
    cout << "John is older than Jane" << endl;
    }

    int johnAge = John;
    cout << "John's Age: " << johnAge << endl;

    string JaneFirstName = "Jane";
    string JohnFirstName = "John";

    string combinedName = JaneFirstName + JohnFirstName;

    cout << "Combined Name: " << combinedName << endl;




    return 0;
}
