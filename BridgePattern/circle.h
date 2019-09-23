#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"
class Circle : public Shape {
public:
    Circle(int x, int y, int rad, DrawAPI *drawAPI);
    virtual ~Circle();
    void draw();
private:
	int m_x;
    int m_y;
    int m_rad;
};

#endif

