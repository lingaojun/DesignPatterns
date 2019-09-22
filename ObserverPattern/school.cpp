#include <iostream>
#include"school.h"

School::School(Observer * observer)
	: m_observer(observer)
{
}

School::~School()
{}

void School::Decision()
{
	std::cout << "Have Decision" << std::endl; \
	m_observer->Notify();
}