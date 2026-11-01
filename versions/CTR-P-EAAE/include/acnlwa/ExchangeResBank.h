#ifndef ACNLWA_EXCHANGERESBANK_H
#define ACNLWA_EXCHANGERESBANK_H

#include "acnlwa/ExchangeBank.h"

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
class ExchangeResBank : public ::ExchangeBank<14156u,T1,T2,T5> {
public:
    virtual ~ExchangeResBank();
};

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
ExchangeResBank<T0, T1, T2, T3, T4, T5>::~ExchangeResBank() {}


#endif  // ACNLWA_EXCHANGERESBANK_H
