#ifndef __FACTORY_H
#define __FACTORY_H

class Animal;
class Factory {
public:
    Factory() {};
    virtual ~Factory() = 0;
    virtual Animal* CreatrFactory() = 0;
private:
	Animal* m_animal;
};


#endif
