#ifndef __REDCELL_H
#define __REDCELL_H

#include "cell.h"
#include <string>

class RedCell : public Cell {
public:
    RedCell(std::string color);
    virtual ~RedCell();
    void ShowColor() const;
	Cell* Clone();
private:
    std::string m_bodyColor;
};

#endif

