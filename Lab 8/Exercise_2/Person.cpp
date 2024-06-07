#include "Person.h"

Person::Person() : Weight(0.0) {}

Person::Person(float newWeight) : Weight(newWeight) {}

float Person::operator+(const Person& otherPerson) {
    return this->Weight + otherPerson.Weight;
}

bool Person::operator==(const Person& otherPerson) {
    return this->Weight + otherPerson.Weight;
}

bool Person::operator!=(const Person& otherPerson) {
    return this->Weight + otherPerson.Weight;
}

Person::operator int() {
    return mAge;
}