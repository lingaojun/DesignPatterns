// FactoryMode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Product.h"
#include "Factory.h"
int main()
{
	Factory *fac = new ConcreteFactory();//先声明一个大的基类 之所以定义一个Factory指针是为了显而易见
	Product *p = fac->CreateProduct(); //调用基类中的CreateProduct函数来创建具体的实例即产品 定义Product指针是为了显而易见
	return 0;
}

