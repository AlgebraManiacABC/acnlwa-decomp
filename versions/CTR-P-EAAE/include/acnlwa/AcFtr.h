#ifndef ACNLWA_ACFTR_H
#define ACNLWA_ACFTR_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/DemoActor.h"
#include "acnlwa/bgcheck/MoveBg.h"
#include "acnlwa/ObjTalkRecept.h"

class AcFtr : public ::UtlBase< ::DemoActor>, public ::bgcheck::MoveBg, public ::ObjTalkRecept {
public:
    virtual ~AcFtr();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void Process_VF14();
    virtual void Base_VF15();
    virtual unsigned int DemoActor_VF20();
    virtual int * DemoActor_VF22();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF33();
    virtual unsigned int UtlBase_VF34();
    virtual unsigned int UtlBase_VF35();
    virtual void AcFtr_VF36();
    virtual void AcFtr_VF37();
    virtual unsigned int AcFtr_VF38(unsigned int, unsigned long long);
    virtual unsigned int AcFtr_VF39();
    virtual void AcFtr_VF40();
    virtual void AcFtr_VF41();
    virtual void AcFtr_VF42();
    virtual void AcFtr_VF43();
    virtual void AcFtr_VF44();
    virtual void AcFtr_VF45();
    virtual void AcFtr_VF46();
    virtual void AcFtr_VF47();
    virtual void AcFtr_VF48();
    virtual void AcFtr_VF49();
    virtual void AcFtr_VF50();
    virtual void AcFtr_VF51();
    virtual void AcFtr_VF52();
    virtual void AcFtr_VF53();
    virtual void AcFtr_VF54();
    virtual void AcFtr_VF55();
    virtual void AcFtr_VF56();
    virtual void AcFtr_VF57();
    virtual void AcFtr_VF58();
    virtual void AcFtr_VF59();
    virtual void AcFtr_VF60();
    virtual void AcFtr_VF61();
    virtual void AcFtr_VF62();
    virtual void AcFtr_VF63();
    virtual void AcFtr_VF64();
    virtual void AcFtr_VF65();
    virtual void AcFtr_VF66();

    private:
    char unk_0x010[0x2e8];
    unsigned long long unk_0x2f8;
    char unk_0x300[0x464];
    unsigned short unk_0x764;
    char unk_0x768[0x3e];
    char unk_0x7a4;
    char unk_0x7a8[0x80];
    int unk_0x828;
};

#endif  // ACNLWA_ACFTR_H
