#ifndef __SALEFISH_H
#define __SALEFISH_H

class Animal;
class Factory;
class SaleFish {
public:
    SaleFish(Factory* factory);
    void Sale();
private:
	Factory *m_factory;
    Animal *m_animal;
};

#endif
