#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

enum COLOR { Green, Blue, White, Black, Brown };

class Animal {
public:
    Animal();
    Animal(string name, COLOR color);
    virtual ~Animal();
    virtual void speak() const;
    virtual void move() const = 0; // pure virtual function

protected:
    string _name;
    COLOR _color;
};

#endif // ANIMAL_H
