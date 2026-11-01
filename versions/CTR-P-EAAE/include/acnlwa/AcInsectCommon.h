#ifndef ACNLWA_ACINSECTCOMMON_H
#define ACNLWA_ACINSECTCOMMON_H

#include "acnlwa/AcObjectBase.h"

class AcInsectCommon : public ::AcObjectBase {
public:
    virtual ~AcInsectCommon();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual int Process_VF11();
    virtual unsigned int Process_VF12();
    virtual void VF17(int);
    virtual void VF18() = 0;
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26() = 0;
    virtual void VF27();
    virtual void VF28() = 0;
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35() = 0;
    virtual void VF36();
    virtual void VF37();
    virtual void VF38() = 0;
    virtual void VF39() = 0;
};

#endif  // ACNLWA_ACINSECTCOMMON_H
