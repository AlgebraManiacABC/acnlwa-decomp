#ifndef ACNLWA_ACNPCNML_H
#define ACNLWA_ACNPCNML_H

#include "acnlwa/AcNpc.h"
#include "acnlwa/NpcTalkRecept.h"

class AcNpcNml : public ::AcNpc {
public:
    class TalkRcpt : public ::NpcTalkRecept {
    public:
        virtual ~TalkRcpt();
        virtual void ITalkRecept_VF02();
        virtual void ITalkRecept_VF09();
        virtual void ITalkRecept_VF10();
        virtual void ITalkRecept_VF11();
        virtual void ITalkRecept_VF12();
        virtual void ITalkRecept_VF13();
        virtual void ITalkRecept_VF14();
        virtual void ITalkRecept_VF15();
        virtual void ITalkRecept_VF16();
        virtual void ITalkRecept_VF17();
        virtual void ITalkRecept_VF18();
        virtual void ITalkRecept_VF19();
        virtual void ITalkRecept_VF34();
        virtual void ITalkRecept_VF39();
        virtual void ITalkRecept_VF40();
        virtual void ITalkRecept_VF41();
        virtual void ITalkRecept_VF42();
        virtual void ITalkRecept_VF43();
        virtual void ITalkRecept_VF46();
        virtual void ITalkRecept_VF47();
        virtual void ITalkRecept_VF48();
        virtual void ITalkRecept_VF49();
        virtual void ITalkRecept_VF50();
        virtual void ITalkRecept_VF51();
        virtual void ITalkRecept_VF53();
        virtual void ITalkRecept_VF54();
        virtual unsigned int ITalkRecept_VF58();
        virtual void ITalkRecept_VF61();
        virtual void VF64();
        virtual void VF65();
        virtual void VF66();
        virtual void VF67();
        virtual unsigned int VF70();
        virtual void VF71();
        virtual void VF72();
        virtual void VF74();
        virtual void VF75();
        virtual void VF76();
        virtual unsigned int VF78();
        virtual void VF80();
        virtual void VF81();
        virtual void VF82();
        virtual void VF83();
        virtual void VF84();
    };

    virtual ~AcNpcNml();
    virtual unsigned int Process_VF12();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF44();
    virtual void VF48();
    virtual unsigned int VF49();
    virtual void VF54();
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual void VF71();
    virtual void VF72();
    virtual void VF74();
    virtual void VF84();
    virtual void VF85();
    virtual void VF86();
    virtual void VF87();
    virtual void VF88();
    virtual void VF89();
    virtual void VF90();
    virtual void VF91();
    virtual void VF92();
    virtual void VF93();
    virtual void VF94();
    virtual void VF95();
    virtual void VF96();
    virtual void VF97();
    virtual void VF98();
    virtual void VF99();
    virtual void VF100();
    virtual void VF101();
    virtual void VF102();
    virtual void VF103();
    virtual void VF104();

    private:
    char unk_0xaa4[0x53c];
    int unk_0xfe0;
};

#endif  // ACNLWA_ACNPCNML_H
