#include "redcircle.h"
#include <iostream>

RedCircle::~RedCircle()
{}

void RedCircle::drawCircle(int x, int y, int rad)
{
    std::cout << "Red::" << __FUNCTION__ << std::endl;
    std::cout <<  "x = " << x << std::endl;
    std::cout <<  "y = " << y << std::endl;
    std::cout <<  "rad = " << rad << std::endl;
    std::cout << "Had Draw RedCircle" << std::endl;
}

