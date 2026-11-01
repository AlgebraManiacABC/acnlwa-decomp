#ifndef ACNLWA_PLAYERFACEBANK_H
#define ACNLWA_PLAYERFACEBANK_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/Bank.h"

class PlayerFaceBank : public ::Bank<40543u,1u,true, ::BankVramConfig<0u,0u,0u,0u,false> > {
public:
    virtual ~PlayerFaceBank();
    virtual void Bank_VF02();
};

#endif  // ACNLWA_PLAYERFACEBANK_H
