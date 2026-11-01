#ifndef ACNLWA_ACNPCSPRESETSAN_H
#define ACNLWA_ACNPCSPRESETSAN_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpResetsan : public ::AcNpcSp {
public:
    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
        virtual void VF65();
        virtual unsigned int VF80();
        virtual unsigned int VF81();
        virtual unsigned int VF82();
        virtual unsigned int VF85();
    };

    virtual ~AcNpcSpResetsan();
    virtual unsigned int Process_VF09();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF71();
    virtual void VF72();
    virtual void VF73();
    virtual unsigned int VF81();
};

#endif  // ACNLWA_ACNPCSPRESETSAN_H
