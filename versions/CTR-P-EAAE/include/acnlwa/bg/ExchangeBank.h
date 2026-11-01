#ifndef ACNLWA_BG_EXCHANGEBANK_H
#define ACNLWA_BG_EXCHANGEBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeResBank.h"
#include "acnlwa/item/ResLoader.h"

namespace bg {

template <typename T0, unsigned int T1>
class ExchangeBank : public ExchangeResBank<T1,T0,ExchangeBankKeywordMyDesignFgNameEx<(SvFgName::Name)32766>,item::ResLoader,1u,false> {
public:
    virtual ~ExchangeBank();
    virtual void ExchangeBank_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

template <typename T0, unsigned int T1>
ExchangeBank<T0, T1>::~ExchangeBank() {}

template <typename T0, unsigned int T1>
void ExchangeBank<T0, T1>::ExchangeBank_VF02() {}

template <typename T0, unsigned int T1>
void ExchangeBank<T0, T1>::VF03() {}

template <typename T0, unsigned int T1>
void ExchangeBank<T0, T1>::VF04() {}

template <typename T0, unsigned int T1>
void ExchangeBank<T0, T1>::VF05() {}

template <typename T0, unsigned int T1>
void ExchangeBank<T0, T1>::VF06() {}

template <typename T0, unsigned int T1>
void ExchangeBank<T0, T1>::VF07() {}


}  // namespace bg

#endif  // ACNLWA_BG_EXCHANGEBANK_H
