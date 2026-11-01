#ifndef ACNLWA_ACSTRCCAMPINGCAR_H
#define ACNLWA_ACSTRCCAMPINGCAR_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/AcStrc.h"

class AcStrcCampingCar : public ::UtlBase< ::AcStrc> {
public:
    virtual ~AcStrcCampingCar();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF20();
    virtual int * DemoActor_VF22();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF33();
    virtual unsigned int UtlBase_VF34();
    virtual unsigned int UtlBase_VF35();
    virtual void VF36();
    virtual void VF37();
    virtual void VF38();
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
    virtual void VF49();
    virtual void VF50();
    virtual void VF51();
    virtual void VF52();
    virtual void VF53();
    virtual void VF54();
    virtual void VF55();
    virtual void VF56();
    virtual void VF57();
    virtual void VF58();
    virtual unsigned int VF59();

    private:
    char unk_0x004[0x59c];
    int unk_0x5a0;
    char unk_0x5a4[0x5c];
    int unk_0x600;
};

#endif  // ACNLWA_ACSTRCCAMPINGCAR_H
