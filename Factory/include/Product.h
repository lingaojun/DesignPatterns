#pragma once
#ifndef _PRODUCT_H
#define _PRODUCT_H

class Product //声明一个基类
{
public:
	virtual ~Product();
protected:
	Product();
private:

};

class ConcreteProduct :public Product //声明一个派生类
{
public:
	ConcreteProduct();
	~ConcreteProduct();
protected:

private:

};
#endif
