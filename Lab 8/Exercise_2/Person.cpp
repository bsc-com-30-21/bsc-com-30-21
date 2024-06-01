#include <iostream>
#include "Person.h"
using namespace std;


int main() {
    Person person1(70.5);
    Person person2(65.0);

    float combinedWeight = person1 + person2;

    cout << "Combined weight: " << combinedWeight << " kg" << endl;

    return 0;
}
