#include "stream.h"
#include <iostream>

Stream::~Stream()
{}

void Stream::Read()
{
	std::cout << "Stream Read" << std::endl;
}