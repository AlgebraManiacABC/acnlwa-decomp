#ifndef ACNLWA_ACNPCSPTOURDESK_H
#define ACNLWA_ACNPCSPTOURDESK_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/sead/IDelegateR.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpTourDesk : public ::AcNpcSp {
public:
    class AsyncAction : public ::sead::IDelegateR<bool> {
    public:
        virtual void VF00();
        virtual void VF01();
    };

    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
        virtual void ITalkRecept_VF38();
        virtual void VF65();
        virtual void VF71();
        virtual void VF72();
        virtual void VF77();
    };

    virtual ~AcNpcSpTourDesk();
    virtual unsigned int Process_VF12();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF36();
    virtual void VF71();
    virtual void VF75();
    virtual unsigned int VF81();
    virtual unsigned int VF82();
};

#endif  // ACNLWA_ACNPCSPTOURDESK_H
