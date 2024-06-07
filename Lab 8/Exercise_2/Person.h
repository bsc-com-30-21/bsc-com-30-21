#pragma once

#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(float newWeight);

    operator int ();

    // Overload the add operator
    float operator+(const Person& otherPerson);

    bool operator== (const Person& otherPerson);
    bool operator!= (const Person& otherPerson);

    bool operator< (const Person& otherPerson);
    bool operator> (const Person& otherPerson);


private:
    float Weight;
    string name;
};
