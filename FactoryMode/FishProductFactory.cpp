#include "FishProductFactory.h"
#include "Fish.h"
#include <iostream>


Animal* FishProductFactory::CreatrFactory()
{
    std::cout << "Create FishProductFactory" << std::endl;
    return new Fish();
}


