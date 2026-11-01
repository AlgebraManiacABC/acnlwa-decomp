#ifndef ACNLWA_PLAYERSHOESBANK_H
#define ACNLWA_PLAYERSHOESBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class PlayerShoesBank : public ExchangeModelBank<17703u,BankVramConfig<600u,2u,3600u,2u,false>,ExchangeBankKeywordFgNameEx<(SvFgName::Name)32766>,item::ResLoader,2u,true> {
public:
    virtual ~PlayerShoesBank();
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

#endif  // ACNLWA_PLAYERSHOESBANK_H
