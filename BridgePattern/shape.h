#ifndef __SHAPE_H#define __SHAPE_H
#include "drawAPI.h"
class Shape {public:    Shape(DrawAPI *drawAPI);    virtual ~Shape();    virtual void draw() = 0;   
DrawAPI *m_drawAPI;};

#endif
