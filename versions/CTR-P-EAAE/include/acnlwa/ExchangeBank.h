#ifndef ACNLWA_EXCHANGEBANK_H
#define ACNLWA_EXCHANGEBANK_H

#include "acnlwa/ExchangeBankBase.h"
#include "acnlwa/DoubleBank.h"

template <unsigned int T0, typename T1, typename T2, bool T3>
class ExchangeBank : public ::ExchangeBankBase, public ::DoubleBank<T0,T3,T1> {
public:
    virtual ~ExchangeBank();
    virtual void ExchangeBank_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

template <unsigned int T0, typename T1, typename T2, bool T3>
ExchangeBank<T0, T1, T2, T3>::~ExchangeBank() {}

template <unsigned int T0, typename T1, typename T2, bool T3>
void ExchangeBank<T0, T1, T2, T3>::ExchangeBank_VF02() {}

template <unsigned int T0, typename T1, typename T2, bool T3>
void ExchangeBank<T0, T1, T2, T3>::VF03() {}

template <unsigned int T0, typename T1, typename T2, bool T3>
void ExchangeBank<T0, T1, T2, T3>::VF04() {}

template <unsigned int T0, typename T1, typename T2, bool T3>
void ExchangeBank<T0, T1, T2, T3>::VF05() {}

template <unsigned int T0, typename T1, typename T2, bool T3>
void ExchangeBank<T0, T1, T2, T3>::VF06() {}

template <unsigned int T0, typename T1, typename T2, bool T3>
void ExchangeBank<T0, T1, T2, T3>::VF07() {}


#endif  // ACNLWA_EXCHANGEBANK_H
