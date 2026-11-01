#ifndef ACNLWA_BSINDOORDOORSE_H
#define ACNLWA_BSINDOORDOORSE_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/Base.h"

class BsIndoorDoorSE : public ::UtlBase< ::Base> {
public:
    virtual ~BsIndoorDoorSE();
    virtual int Process_VF02();
    virtual unsigned int Process_VF03();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual unsigned int Process_VF06();
    virtual void Process_VF07();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual void Process_VF13();
    virtual void Base_VF15();
    virtual void Actor_VF16();
    virtual void DemoActor_VF17();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int DemoActor_VF21();
};

#endif  // ACNLWA_BSINDOORDOORSE_H
