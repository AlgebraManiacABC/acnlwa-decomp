#ifndef ACNLWA_PLAYERTOPSBANK_H
#define ACNLWA_PLAYERTOPSBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class PlayerTopsBank : public ExchangeModelBank<32891u,BankVramConfig<2800u,2u,8800u,2u,false>,ExchangeBankKeywordMyDesignFgNameEx<(SvFgName::Name)32765>,item::ResLoader,2u,true> {
public:
    virtual ~PlayerTopsBank();
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

#endif  // ACNLWA_PLAYERTOPSBANK_H
