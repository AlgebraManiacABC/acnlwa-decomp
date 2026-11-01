#ifndef ACNLWA_BSGENERALOBJ_H
#define ACNLWA_BSGENERALOBJ_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/Base.h"

class BsGeneralObj : public ::UtlBase< ::Base> {
public:
    virtual ~BsGeneralObj();
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
    virtual unsigned int Process_VF12();
    virtual void Process_VF13();
    virtual void Base_VF15();
    virtual void Actor_VF16();
    virtual void DemoActor_VF17();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int DemoActor_VF21();
    virtual int * DemoActor_VF22();
    virtual unsigned int DemoActor_VF23();
    virtual unsigned int DemoActor_VF24();
};

#endif  // ACNLWA_BSGENERALOBJ_H
