#ifndef ACNLWA_ACINSECTFIELDBASE_H
#define ACNLWA_ACINSECTFIELDBASE_H

#include "acnlwa/AcInsectCommon.h"

class AcInsectFieldBase : public ::AcInsectCommon {
public:
    virtual ~AcInsectFieldBase();
    virtual bool Process_VF08();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual void VF19();
    virtual void VF25();
    virtual void VF26();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF36();
    virtual void VF38();
    virtual void VF39();
    virtual void VF40();
    virtual void VF41();
    virtual void VF42();
    virtual void VF43();
    virtual void VF44();
    virtual void VF45();
    virtual void VF46();
    virtual void VF47();
    virtual void VF48();
    virtual void VF49();
    virtual void VF50();
    virtual void VF51();
    virtual void VF52();
    virtual void VF53();
    virtual void VF54();
    virtual void VF55();
};

#endif  // ACNLWA_ACINSECTFIELDBASE_H
