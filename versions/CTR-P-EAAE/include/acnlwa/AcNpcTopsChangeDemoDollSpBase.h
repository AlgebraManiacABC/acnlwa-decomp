#ifndef ACNLWA_ACNPCTOPSCHANGEDEMODOLLSPBASE_H
#define ACNLWA_ACNPCTOPSCHANGEDEMODOLLSPBASE_H

#include "acnlwa/AcNpcDemoDollBase.h"

class AcNpcTopsChangeDemoDollSpBase : public ::AcNpcDemoDollBase {
public:
    virtual ~AcNpcTopsChangeDemoDollSpBase();
    virtual void UtlBase_VF32();
    virtual void VF42();
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual bool VF89();
    virtual void VF90();

    private:
    char unk_0xaa4[0x80];
    unsigned int unk_0xb24;
};

#endif  // ACNLWA_ACNPCTOPSCHANGEDEMODOLLSPBASE_H
