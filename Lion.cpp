#include "Lion.h"

Lion::Lion(string name, COLOR color) : Mammal(name, color) {
    cout << "Constructing Lion object " << _name << endl;
}

Lion::~Lion() {
    cout << "Destructing Lion object " << _name << endl;
}

void Lion::speak() const {
    cout << "Roar" << endl;
}

void Lion::move() const {
    cout << "Lion prowls majestically" << endl;
}
