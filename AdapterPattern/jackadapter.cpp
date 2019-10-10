#include "jackadapter.h"

JackAdapter::JackAdapter(Jack *jack)
    : m_jack(jack)
{
}

JackAdapter::~JackAdapter()
{
}

void JackAdapter::Charge()
{
    m_jack->Charge();
}