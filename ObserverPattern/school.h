#ifndef __SCHOOL_H
#define __SCHOOL_H

#include "Observer.h"
class School {
public:
	School(Observer *observer);
	~School();
	void Decision();
private:
	Observer *m_observer;

};

#endif
