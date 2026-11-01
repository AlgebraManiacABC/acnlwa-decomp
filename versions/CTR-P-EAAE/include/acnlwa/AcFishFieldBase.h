#ifndef ACNLWA_ACFISHFIELDBASE_H
#define ACNLWA_ACFISHFIELDBASE_H

#include "acnlwa/AcFishCommon.h"
#include "acnlwa/ResourceGetSkeletal.h"

class AcFishFieldBase : public ::AcFishCommon, public ::ResourceGetSkeletal {
public:
    virtual ~AcFishFieldBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual unsigned int Process_VF12();
    virtual void VF17();
    virtual void VF18() = 0;
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
    virtual void VF27();
    virtual void VF28() = 0;
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35();
    virtual void VF36();
    virtual void VF37();
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
    virtual void VF49() = 0;
};

#endif  // ACNLWA_ACFISHFIELDBASE_H
