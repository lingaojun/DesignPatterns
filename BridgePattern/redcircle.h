#ifndef __REDCIRCLE_H
#define __REDCIRCLE_H

#include "drawAPI.h"

class RedCircle : public DrawAPI {
public:
    virtual ~RedCircle();
    void drawCircle(int x, int y, int rad);
};

#endif

