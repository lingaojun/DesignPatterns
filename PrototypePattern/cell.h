#ifndef __CELL_H
#define __CELL_H

class Cell {
public:
    virtual ~Cell() = 0;
    virtual Cell* Clone() = 0;
    virtual void ShowColor() const = 0;
};

#endif

