#ifndef ACNLWA_ACNPCSPHONMA_H
#define ACNLWA_ACNPCSPHONMA_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpHonma : public ::AcNpcSp {
public:
    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
        virtual void VF65();
        virtual void VF72();
        virtual unsigned int VF80();
        virtual unsigned int VF81();
        virtual unsigned int VF83();
        virtual unsigned int VF87();
    };

    virtual ~AcNpcSpHonma();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF71();
    virtual void VF72();
    virtual unsigned int VF81();
};

#endif  // ACNLWA_ACNPCSPHONMA_H
