#include "SaleFish.h"
#include "factory.h"
#include "Animal.h"
#include <iostream>
SaleFish::SaleFish(Factory* factory)
    : m_factory(factory)
{}

void SaleFish::Sale()
{
    m_animal = m_factory->CreatrFactory();
    m_animal->Jump();
    std::cout << "Saled" << std::endl;
}