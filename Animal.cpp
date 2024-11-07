//
// Created by hanakamar on 07/11/2024.
//
#include "Animal.h"

Animal::Animal() : _name("unknown"), _color(Green) {
    cout << "Constructing Animal object " << _name << endl;
}

Animal::Animal(string name, COLOR color) : _name(name), _color(color) {
    cout << "Constructing Animal object " << _name << " with color " << color << endl;
}

Animal::~Animal() {
    cout << "Destructing Animal object " << _name << endl;
}

void Animal::speak() const {
    cout << "Animal speaks" << endl;
}
