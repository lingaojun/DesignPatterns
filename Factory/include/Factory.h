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

class ConcreteFactory :public Factory //��ΪFactory������һ�������ӿڣ�������������в��ܾ���ʵ������һ����
{
public:
	ConcreteFactory();
	~ConcreteFactory();
	Product *CreateProduct();
protected:

private:

};

#endif
