#include "Dog.h"

Dog::Dog(string name, COLOR color, string owner) : Mammal(name, color), _owner(owner) {
    cout << "Constructing Dog object " << _name << " owned by " << _owner << endl;
}

Dog::~Dog() {
    cout << "Destructing Dog object " << _name << endl;
}

void Dog::speak() const {
    cout << "Woof" << endl;
}

// Implement the pure virtual move() method from Animal
void Dog::move() const {
    cout << "Dog runs around" << endl;
}
