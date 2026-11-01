#ifndef ACNLWA_TOOLBANK_H
#define ACNLWA_TOOLBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/ExchangeModelBank.h"
#include "acnlwa/item/ResLoader.h"

class ToolBank : public ExchangeModelBank<24448u,BankVramConfig<736u,4u,3824u,4u,false>,ExchangeBankKeywordMyDesignFgNameEx<(SvFgName::Name)32766>,item::ResLoader,2u,false> {
public:
    virtual ~ToolBank();
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

#endif  // ACNLWA_TOOLBANK_H
