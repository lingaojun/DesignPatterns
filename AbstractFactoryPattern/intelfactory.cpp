#include "intelfactory.h"
#include "intelbeef.h"
#include "intelapple.h"
IntelFactory::~IntelFactory()
{}

Beef* IntelFactory::CreateBeef()
{
    return new IntelBeef();
}

Apple* IntelFactory::CreateApple()
{
    return new IntelApple();
}

