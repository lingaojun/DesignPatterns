#include "greencircle.h"
#include <iostream>

GreenCircle::~GreenCircle()
{}

void GreenCircle::drawCircle(int x, int y, int rad)
{
    std::cout << "Green::" << __FUNCTION__ << std::endl;
    std::cout <<  "x = " << x << std::endl;
    std::cout <<  "y = " << y << std::endl;
    std::cout <<  "rad = " << rad << std::endl;
    std::cout << "Had Draw GreenCircle" << std::endl;
}
