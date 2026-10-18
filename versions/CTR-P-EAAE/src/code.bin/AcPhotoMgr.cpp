#include "acnlwa/AcPhotoMgr.h"
#include "types.h"

extern "C" {
int FUN_0022bb00(...);
int FUN_0023c860(...);
}

AcPhotoMgr::~AcPhotoMgr() {}

unsigned int AcPhotoMgr::Process_VF03() {}

unsigned int AcPhotoMgr::Process_VF06() {}

unsigned int AcPhotoMgr::Process_VF09() {}

unsigned int AcPhotoMgr::Process_VF12()
{
    FUN_0023c860(&this->unk_0x4d4);
    if (this->unk_0xe1 == '\x04') {
        FUN_0022bb00(&this->unk_0xec);
    }
    return 2;
}

unsigned int AcPhotoMgr::DemoActor_VF20() {}

void AcPhotoMgr::AcPhotoMgr_VF30() {}

void AcPhotoMgr::AcPhotoMgr_VF31() {}

