#ifndef ACNLWA_ACNPCSPMAIKO_H
#define ACNLWA_ACNPCSPMAIKO_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpMaiko : public ::AcNpcSp {
public:
    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
        virtual void VF65();
        virtual unsigned int VF80();
        virtual unsigned int VF81();
        virtual unsigned int VF83();
    };

    virtual ~AcNpcSpMaiko();
    virtual unsigned int Process_VF09();
    virtual unsigned int DemoActor_VF19();
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

    private:
    char unk_0x0aa4[0x1330];
    int unk_0x1dd4;
};

#endif  // ACNLWA_ACNPCSPMAIKO_H
