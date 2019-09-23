#include "greencircle.h"
#include "redcircle.h"
#include "shape.h"
#include "circle.h"
#include "drawAPI.h"
int main(void)
{
    Shape* greenCircle = new Circle(100,200,30,new GreenCircle());
    Shape* redCircle = new Circle(100,100,30,new RedCircle());
    greenCircle->draw();
    redCircle->draw();
    return 0;
}
