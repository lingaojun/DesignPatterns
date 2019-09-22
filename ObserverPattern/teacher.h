#ifndef __TEACHER_H
#define __TEACHER_H
#include <vector>
#include "Observer.h"
#include "student.h"

class Teacher : public Observer {
public:
	~Teacher();
	void Notify();
	void Add(Student *Stu);
private:
	std::vector<Student*> StuVector;
};

#endif // __TEACHER_H
