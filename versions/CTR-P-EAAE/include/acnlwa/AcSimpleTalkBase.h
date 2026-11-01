#ifndef ACNLWA_ACSIMPLETALKBASE_H
#define ACNLWA_ACSIMPLETALKBASE_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/DemoActor.h"

class AcSimpleTalkBase : public ::UtlBase< ::DemoActor> {
public:
    virtual ~AcSimpleTalkBase();
    virtual unsigned int Process_VF09();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int DemoActor_VF23();
    virtual unsigned int DemoActor_VF24();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF33();
    virtual unsigned int UtlBase_VF34();
    virtual unsigned int UtlBase_VF35();
    virtual void VF36();

    private:
    char unk_0x04[0x64];
    unsigned int unk_0x68;
    char unk_0x6c;
};

#endif  // ACNLWA_ACSIMPLETALKBASE_H
