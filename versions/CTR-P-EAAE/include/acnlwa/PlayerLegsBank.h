#ifndef ACNLWA_PLAYERLEGSBANK_H
#define ACNLWA_PLAYERLEGSBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class PlayerLegsBank : public ExchangeModelBank<17879u,BankVramConfig<700u,2u,3600u,2u,false>,ExchangeBankKeywordMyDesignFgNameEx<(SvFgName::Name)32765>,item::ResLoader,2u,true> {
public:
    virtual ~PlayerLegsBank();
    virtual void ExchangeBank_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

#endif  // ACNLWA_PLAYERLEGSBANK_H
