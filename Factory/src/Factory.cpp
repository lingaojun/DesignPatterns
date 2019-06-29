#include "iostream"
#include "Factory.h"
#include "Product.h"

Factory::Factory()
{

}
Factory::~Factory()
{

}

ConcreteFactory::ConcreteFactory()
{
	std::cout << "ConcreteFactory...." << std::endl;
}
ConcreteFactory::~ConcreteFactory()
{

}
Product *ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}

