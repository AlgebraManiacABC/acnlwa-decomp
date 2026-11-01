#ifndef ACNLWA_ACNPC_H
#define ACNLWA_ACNPC_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/DemoActor.h"
#include "acnlwa/RoadSearchSetupCandCB.h"

class AcNpc : public ::UtlBase< ::DemoActor> {
public:
    class WanderSearchCandCB : public ::RoadSearchSetupCandCB {
    public:
        virtual void VF00();
    };

    virtual ~AcNpc();
    virtual void Process_VF04();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF20();
    virtual int * DemoActor_VF22();
    virtual unsigned int DemoActor_VF23();
    virtual unsigned int DemoActor_VF24();
    virtual unsigned int DemoActor_VF26();
    virtual bool DemoActor_VF27();
    virtual unsigned int DemoActor_VF28();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF33();
    virtual unsigned int UtlBase_VF34();
    virtual unsigned int UtlBase_VF35();
    virtual void VF36();
    virtual void VF37();
    virtual unsigned int VF38();
    virtual void VF39();
    virtual void VF40();
    virtual void VF41();
    virtual void VF42();
    virtual void VF43();
    virtual void VF44();
    virtual void VF45();
    virtual void VF46();
    virtual void VF47();
    virtual void VF48();
    virtual unsigned int VF49();
    virtual unsigned int VF50();
    virtual void VF51();
    virtual void VF52();
    virtual void VF53();
    virtual void VF54();
    virtual void VF55();
    virtual void VF56();
    virtual void VF57();
    virtual unsigned int VF58();
    virtual void VF59();
    virtual void VF60();
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual void VF65();
    virtual void VF66();
    virtual void VF67();
    virtual void VF68();
    virtual void VF69();
    virtual void VF70();
    virtual void VF71();
    virtual void VF72();
    virtual void VF73();
    virtual void VF74();
    virtual void VF75();
    virtual void VF76();
    virtual void VF77();
    virtual void VF78();
    virtual void VF79();
    virtual void VF80();
    virtual unsigned int VF81();
    virtual unsigned int VF82();
    virtual void VF83();
    virtual void VF84();
    virtual void VF85();
    virtual void VF86();
    virtual void VF87();
    virtual void VF88();

    protected:
    char unk_0x004[0x10];
    int unk_0x014;
    char unk_0x018[0x60];
    int unk_0x078;
    char unk_0x07c[0x5e4];
    int * unk_0x660;
    char unk_0x664[0x344];
    int unk_0x9a8;
    char unk_0x9ac[0x8];
    int unk_0x9b4;
    char unk_0x9b8[0xe8];
    int unk_0xaa0;
};

#endif  // ACNLWA_ACNPC_H
