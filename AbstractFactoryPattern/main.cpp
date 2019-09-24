#include "foodfactory.h"
#include "intelfactory.h"
#include "AMDfactory.h"

int main(void)
{
    FoodFactory *interfactory = new IntelFactory();
    FoodFactory *AmdFactory = new AMDFactory();
    Apple *apple = interfactory->CreateApple();
    Beef *beef = AmdFactory->CreateBeef();
    apple->Introduce();
    beef->Introduce();
    delete(interfactory);
    delete(AmdFactory);
    return 0;
}
