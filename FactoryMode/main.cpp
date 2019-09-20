#include <iostream>
#include "FishProductFactory.h"
#include "SaleFish.h"
int main(void)
{
    FishProductFactory fishProductFactory;
    SaleFish saleFish(&fishProductFactory);
    saleFish.Sale();
    return 0;
}
