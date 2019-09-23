#ifndef __DARWAPI_
#define __DARWAPI_

class DrawAPI {
public:
    virtual ~DrawAPI();
    virtual void drawCircle(int x, int y, int rad) = 0;
};

#endif