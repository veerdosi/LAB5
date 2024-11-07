#ifndef LION_H
#define LION_H

#include "Mammal.h"

class Lion : public Mammal {
public:
    Lion(string name, COLOR color);
    ~Lion();
    void speak() const override;
    void move() const override;
};

#endif // LION_H
