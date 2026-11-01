#ifndef ACNLWA_HUMANRESTEXTUREANIMBANK_H
#define ACNLWA_HUMANRESTEXTUREANIMBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/Bank.h"

class HumanResTextureAnimBank : public ::Bank<3072u,1u,false, ::BankVramConfig<0u,0u,0u,0u,false> > {
public:
    virtual ~HumanResTextureAnimBank();
    virtual void Bank_VF02();
};

#endif  // ACNLWA_HUMANRESTEXTUREANIMBANK_H
