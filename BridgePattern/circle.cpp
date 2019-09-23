#include "circle.h"

Circle::Circle(int x, int y, int rad, DrawAPI *drawAPI)
    : m_x(x),
      m_y(y),
      m_rad(rad),
      Shape(drawAPI)
{}

Circle::~Circle()
{}

void Circle::draw()
{
    m_drawAPI->drawCircle(m_x, m_y, m_rad);
}