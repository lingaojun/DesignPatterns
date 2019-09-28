#include "redcell.h"
#include <iostream>

RedCell::RedCell(std::string color)
    : m_bodyColor(color)
{

}

RedCell::~RedCell()
{}

void  RedCell::ShowColor() const
{
    std::cout << "The Color is " << m_bodyColor << std::endl;
}

Cell* RedCell::Clone()
{
    return new RedCell(*this);
}