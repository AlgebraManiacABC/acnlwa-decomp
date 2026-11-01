#ifndef ACNLWA_ACNPCSPROLLAN_H
#define ACNLWA_ACNPCSPROLLAN_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpRollan : public ::AcNpcSp {
public:
    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
        virtual void VF65();
        virtual void VF66();
        virtual unsigned int VF80();
        virtual unsigned int VF81();
    };

    virtual ~AcNpcSpRollan();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF25();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF36();
    virtual unsigned int VF50();
    virtual void VF69();
    virtual void VF71();
    virtual void VF72();
    virtual unsigned int VF81();
};

#endif  // ACNLWA_ACNPCSPROLLAN_H
