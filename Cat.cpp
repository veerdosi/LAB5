#include "Cat.h"

Cat::Cat(string name, COLOR color) : Mammal(name, color) {
    cout << "Constructing Cat object " << _name << endl;
}

Cat::~Cat() {
    cout << "Destructing Cat object " << _name << endl;
}

void Cat::speak() const {
    cout << "Meow" << endl;
}

void Cat::move() const {
    cout << "Cat moves gracefully" << endl;
}
