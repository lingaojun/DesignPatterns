#ifndef __AMDFACTORY_H
#define __AMDFACTORY_H

#include "foodfactory.h"

class AMDFactory : public FoodFactory {
public:
	~AMDFactory();
    Beef *CreateBeef();
    Apple *CreateApple();
};

#endif
