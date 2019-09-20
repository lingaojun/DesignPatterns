#ifndef __FISHPRODUCTFACTORY_H
#define __FISHPRODUCTFACTORY_H

#include "Animal.h"
#include "factory.h"

class FishProductFactory : public Factory {
public:
     Animal* CreatrFactory();
     ~FishProductFactory() {};
};

#endif
