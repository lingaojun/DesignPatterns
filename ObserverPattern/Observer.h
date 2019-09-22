#ifndef __OBSERVER_H
#define __OBSERVER_H

class Observer {
public:
	virtual ~Observer() = 0;
	virtual void Notify() = 0;
};
#endif // !__OBSERVER_H
