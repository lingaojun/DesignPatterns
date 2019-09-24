#ifndef __FOODFACTORY_H
#define __FOODFACTORY_H

#include "beef.h"
#include "apple.h"

class FoodFactory {
public:
    virtual ~FoodFactory() = 0;
    virtual Beef* CreateBeef() = 0;
	virtual Apple* CreateApple() = 0;
};

#endif
