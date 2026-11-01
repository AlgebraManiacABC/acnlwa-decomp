#ifndef ACNLWA_PLAYERACCEBANK_H
#define ACNLWA_PLAYERACCEBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class PlayerAcceBank : public ExchangeModelBank<13772u,BankVramConfig<300u,2u,2000u,2u,false>,ExchangeBankKeywordFgNameEx<(SvFgName::Name)32766>,item::ResLoader,1u,true> {
public:
    virtual ~PlayerAcceBank();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_PLAYERACCEBANK_H
