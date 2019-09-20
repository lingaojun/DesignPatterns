#ifndef __ANIMAL_H
#define __ANIMAL_H

class Animal {
public:
    Animal() {};
    virtual void Jump() = 0;
    virtual ~Animal() = 0;
};

#endif
