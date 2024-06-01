#include "Person.h"
#include <iostream>
using namespace std;


int main() {
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;

    if (Jane == John)
    {
        cout << "this is the same person" << endl;
    }
    
    if (Jane != John)
    {
        cout << "this is not the same person" << endl;
    }
    

    cout << "Total weight: " << totalWeight << endl;

    return 0;
}