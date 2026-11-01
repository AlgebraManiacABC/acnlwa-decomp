#ifndef ACNLWA_MUSICJACKETTEXTUREBANK_H
#define ACNLWA_MUSICJACKETTEXTUREBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeResBank.h"
#include "acnlwa/item/ResLoader.h"

class MusicJacketTextureBank : public ExchangeResBank<16768u,BankVramConfig<0u,0u,0u,0u,false>,ExchangeBankKeywordMyDesignFgNameEx<(SvFgName::Name)32765>,item::ResLoader,1u,false> {
public:
    virtual ~MusicJacketTextureBank();
    virtual void ExchangeBank_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_MUSICJACKETTEXTUREBANK_H
