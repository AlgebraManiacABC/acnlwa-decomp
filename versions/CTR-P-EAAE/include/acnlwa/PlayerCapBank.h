#ifndef ACNLWA_PLAYERCAPBANK_H
#define ACNLWA_PLAYERCAPBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class PlayerCapBank : public ::ExchangeModelBank<31423u, ::BankVramConfig<2500u,3u,12400u,3u,false>, ::PlayerCapBankKeyword, ::item::ResLoader,2u,true> {
public:
    virtual ~PlayerCapBank();
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

#endif  // ACNLWA_PLAYERCAPBANK_H
