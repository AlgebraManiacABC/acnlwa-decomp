#ifndef ACNLWA_PLAYERBOTTOMSBANK_H
#define ACNLWA_PLAYERBOTTOMSBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class PlayerBottomsBank : public ExchangeModelBank<17829u,BankVramConfig<500u,2u,2800u,2u,false>,ExchangeBankKeywordFgNameEx<(SvFgName::Name)32765>,item::ResLoader,2u,true> {
public:
    virtual ~PlayerBottomsBank();
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

#endif  // ACNLWA_PLAYERBOTTOMSBANK_H
