#ifndef __FISH_H
#define __FISH_H

#include "Animal.h"

class Fish : public Animal {
public:
	void Jump();
    Fish() {};
    ~Fish() {};
};

#endif
