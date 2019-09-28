#include "redcell.h"
#include <iostream>

int main(void)
{
    Cell *redCell = new RedCell("Red");
    Cell *redCellOffspring = redCell->Clone();
    redCellOffspring->ShowColor();
    return 0;
}
