#ifndef ACNLWA_ACAUTOCAMPENTRYSIGNBOARD_H
#define ACNLWA_ACAUTOCAMPENTRYSIGNBOARD_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/DemoActor.h"
#include "acnlwa/ObjTalkRecept.h"

class AcAutoCampEntrySignboard : public ::UtlBase< ::DemoActor>, public ::ObjTalkRecept {
public:
    virtual ~AcAutoCampEntrySignboard();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF33();
    virtual unsigned int UtlBase_VF34();
    virtual unsigned int UtlBase_VF35();
    virtual void AcAutoCampEntrySignboard_VF36();
};

#endif  // ACNLWA_ACAUTOCAMPENTRYSIGNBOARD_H
