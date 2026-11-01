#ifndef ACNLWA_NPCTOPSBANK_H
#define ACNLWA_NPCTOPSBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeResBank.h"
#include "acnlwa/item/ResLoader.h"

class NpcTopsBank : public ExchangeResBank<8600u,BankVramConfig<0u,0u,0u,0u,false>,ExchangeBankKeywordFgNameEx<(SvFgName::Name)32766>,item::ResLoader,1u,false> {
public:
    virtual ~NpcTopsBank();
    virtual void ExchangeBank_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_NPCTOPSBANK_H
