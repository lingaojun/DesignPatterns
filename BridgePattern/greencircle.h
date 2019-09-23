#ifndef __GREENCIRCLE_H
#define __GREENCIRCLE_H

#include "drawAPI.h"

class GreenCircle : public DrawAPI {
public:
    virtual ~GreenCircle();
    void drawCircle(int x, int y, int rad);
};

#endif


