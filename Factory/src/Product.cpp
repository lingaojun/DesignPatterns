#include "Product.h"
#include "iostream"

Product::Product()
{

}
Product::~Product()
{

}

ConcreteProduct::ConcreteProduct()
{
	std::cout << "ConcreteProduct...." << std::endl;
}

ConcreteProduct::~ConcreteProduct()
{

}