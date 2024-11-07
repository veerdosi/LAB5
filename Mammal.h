#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal(string name, COLOR color);
    virtual ~Mammal();
    void eat() const;
};

#endif // MAMMAL_H
