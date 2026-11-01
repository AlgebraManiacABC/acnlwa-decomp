#ifndef ACNLWA_ACNPCSPPRESISYO_H
#define ACNLWA_ACNPCSPPRESISYO_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpPreSisyo : public ::AcNpcSp {
public:
    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
        virtual void VF65();
        virtual void VF66();
        virtual unsigned int VF80();
        virtual unsigned int VF81();
        virtual unsigned int VF82();
    };

    virtual ~AcNpcSpPreSisyo();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF71();
    virtual void VF72();
    virtual unsigned int VF81();
};

#endif  // ACNLWA_ACNPCSPPRESISYO_H
