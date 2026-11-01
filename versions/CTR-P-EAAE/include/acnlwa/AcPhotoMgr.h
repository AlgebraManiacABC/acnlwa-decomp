#ifndef ACNLWA_ACPHOTOMGR_H
#define ACNLWA_ACPHOTOMGR_H

#include "acnlwa/DemoActor.h"
#include "acnlwa/script/ITalkRecept.h"

class AcPhotoMgr : public ::DemoActor, public ::script::ITalkRecept {
public:
    virtual ~AcPhotoMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned int DemoActor_VF20();
    virtual void AcPhotoMgr_VF30();
    virtual void AcPhotoMgr_VF31();

    private:
    char unk_0x08[0xd9];
    char unk_0xe1;
    char unk_0xe2[0xa];
    char unk_0xec;
    char unk_0xed[0x3e4];
    int unk_0x4d4;
};

#endif  // ACNLWA_ACPHOTOMGR_H
