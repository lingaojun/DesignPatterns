#include "teacher.h"
#include <iostream>

Teacher::~Teacher()
{}

void Teacher::Notify()
{
	std::cout << "Im the Observer,Now I Notify all" << std::endl;
	auto itr = StuVector.begin();
	for (; itr != StuVector.end(); itr++) {
		(*itr)->Vecation();
	}
	
}

void Teacher::Add(Student * Stu)
{
	StuVector.push_back(Stu);
}

