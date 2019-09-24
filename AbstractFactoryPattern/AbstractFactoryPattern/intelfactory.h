#ifndef __INTELFACTORY_H
#define __INTELFACTORY_H

#include "foodfactory.h"

class IntelFactory : public FoodFactory {
public:
	~IntelFactory();
    Apple *CreateApple();
	Beef *CreateBeef();
};

#endif

