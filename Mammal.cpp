#include "Mammal.h"

Mammal::Mammal(string name, COLOR color) : Animal(name, color) {
    cout << "Constructing Mammal object " << _name << endl;
}

Mammal::~Mammal() {
    cout << "Destructing Mammal object " << _name << endl;
}

void Mammal::eat() const {
    cout << "Mammal eats" << endl;
}
