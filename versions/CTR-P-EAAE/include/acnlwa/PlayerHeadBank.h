#ifndef ACNLWA_PLAYERHEADBANK_H
#define ACNLWA_PLAYERHEADBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/g3d/ResourceLoader.h"

class PlayerHeadBank : public ::ExchangeModelBank<25891u, ::BankVramConfig<1800u,4u,6600u,4u,false>, ::PlayerHeadBankKeyword, ::g3d::ResourceLoader,1u,false> {
public:
    virtual ~PlayerHeadBank();
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

#endif  // ACNLWA_PLAYERHEADBANK_H
