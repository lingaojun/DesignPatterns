#include "AMDfactory.h"
#include "AMDbeef.h"
#include "AMDapple.h"
AMDFactory::~AMDFactory()
{

}

Beef* AMDFactory::CreateBeef()
{
    return new AMDBeef();
}

Apple* AMDFactory::CreateApple()
{
    return new AMDApple();
}
