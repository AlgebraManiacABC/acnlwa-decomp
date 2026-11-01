#ifndef ACNLWA_EXCHANGEMODELBANK_H
#define ACNLWA_EXCHANGEMODELBANK_H

#include "acnlwa/ExchangeResBank.h"
#include "acnlwa/ExchangeModelBankBase.h"

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
class ExchangeModelBank : public ::ExchangeResBank<T0,T1,T2,T3,T4,T5>, public ::ExchangeModelBankBase {
public:
    virtual ~ExchangeModelBank();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
ExchangeModelBank<T0, T1, T2, T3, T4, T5>::~ExchangeModelBank() {}

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
void ExchangeModelBank<T0, T1, T2, T3, T4, T5>::VF08() {}

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
void ExchangeModelBank<T0, T1, T2, T3, T4, T5>::VF09() {}

template <unsigned int T0, typename T1, typename T2, typename T3, unsigned int T4, bool T5>
void ExchangeModelBank<T0, T1, T2, T3, T4, T5>::VF10() {}


#endif  // ACNLWA_EXCHANGEMODELBANK_H
