#pragma once
#ifndef _FACTORY_H
#define _FACTORY_H

class Product;

class Factory
{
public:
	virtual ~Factory();
	virtual Product *CreateProduct() = 0;
protected:
	Factory();
private:
};

class ConcreteFactory :public Factory //先为Factory类派生一个创建接口，在这个派生类中才能决定实例化哪一个类
{
public:
	ConcreteFactory();
	~ConcreteFactory();
	Product *CreateProduct();
protected:

private:

};

#endif
