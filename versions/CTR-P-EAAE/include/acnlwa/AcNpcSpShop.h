#ifndef ACNLWA_ACNPCSPSHOP_H
#define ACNLWA_ACNPCSPSHOP_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpShop : public ::AcNpcSp {
public:
    class ShopNpcTalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~ShopNpcTalkRecept();
        virtual void ITalkRecept_VF39();
        virtual void VF64();
        virtual void VF68();
        virtual void VF71();
        virtual void VF72();
        virtual unsigned int VF80();
        virtual unsigned int VF81();
        virtual unsigned int VF82();
        virtual unsigned int VF83();
        virtual unsigned int VF84();
        virtual unsigned int VF85();
        virtual unsigned int VF86();
        virtual unsigned int VF87();
        virtual unsigned int VF88();
        virtual unsigned int VF89();
        virtual unsigned int VF90();
        virtual void VF91();
        virtual unsigned int VF92();
        virtual unsigned int VF93();
        virtual unsigned int VF94();
        virtual unsigned int VF95();
        virtual unsigned int VF96();
        virtual unsigned int VF97();
        virtual unsigned int VF98();
        virtual unsigned int VF99();
        virtual unsigned int VF100();
        virtual unsigned int VF101();
        virtual unsigned int VF102();
        virtual unsigned int VF103();
        virtual unsigned int VF104();
        virtual unsigned int VF105();
        virtual unsigned int VF106();
        virtual unsigned int VF107();
        virtual unsigned int VF108();
        virtual unsigned int VF109();
        virtual unsigned int VF110();
        virtual unsigned int VF111();
        virtual unsigned int VF112();
        virtual unsigned int VF113();
        virtual unsigned int VF114();
        virtual unsigned int VF115();
        virtual unsigned int VF116();
        virtual unsigned int VF117();
        virtual unsigned int VF118();
        virtual unsigned int VF119();
        virtual unsigned int VF120();
        virtual unsigned int VF121();
        virtual unsigned int VF122();
        virtual unsigned int VF123();
        virtual unsigned int VF124();
        virtual void VF125();
        virtual unsigned int VF126();
        virtual unsigned int VF127();
        virtual unsigned int VF128();
        virtual unsigned int VF129();
        virtual unsigned int VF130();
        virtual unsigned int VF131();

        char unk_0x008[0x2d4];
        char unk_0x2dc;
        char unk_0x2dd;
        char unk_0x2de;
    };

    virtual ~AcNpcSpShop();
    virtual unsigned int Process_VF09();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int DemoActor_VF21();
    virtual int * DemoActor_VF22();
    virtual unsigned int DemoActor_VF23();
    virtual unsigned int DemoActor_VF24();
    virtual unsigned int UtlBase_VF30();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF35();
    virtual void VF36();
    virtual void VF71();
    virtual unsigned int VF82();
    virtual void VF89();
    virtual void VF90();
    virtual unsigned int VF91();
    virtual void VF92();
    virtual void VF93();
    virtual void VF94();
    virtual void VF95();
    virtual void VF96() = 0;
    virtual void VF97() = 0;
    virtual unsigned int VF98();
    virtual void VF99();
};

#endif  // ACNLWA_ACNPCSPSHOP_H
