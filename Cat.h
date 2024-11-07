#ifndef CAT_H
#define CAT_H

#include "Mammal.h"

class Cat : public Mammal {
public:
    Cat(string name, COLOR color);
    ~Cat();
    void speak() const override;
    void move() const override;
};

#endif // CAT_H
