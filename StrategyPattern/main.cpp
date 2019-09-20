#include "bird.h"
#include "human.h"
#include "animal.h"
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<Animal> animal1 = std::make_unique<Bird>();
    animal1->ShowBodyColor();
    std::unique_ptr<Animal> animal2 = std::make_unique<Human>();
    animal2->ShowBodyColor();

    return 0;
}
