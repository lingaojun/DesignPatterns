#pragma once
#ifndef _PRODUCT_H
#define _PRODUCT_H

class Product //����һ������
{
public:
	virtual ~Product();
protected:
	Product();
private:

};

class ConcreteProduct :public Product //����һ��������
{
public:
	ConcreteProduct();
	~ConcreteProduct();
protected:

private:

};
#endif
