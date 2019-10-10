#ifndef __JACK_ADAPTER_H
#define __JACK_ADAPTER_H

#include "jack.h"
#include "Chinajack.h"

class JackAdapter : public ChinaJack {
public:
    JackAdapter(Jack* jack);
	virtual ~JackAdapter();
    virtual void Charge();
private:
    Jack *m_jack;
};


#endif

