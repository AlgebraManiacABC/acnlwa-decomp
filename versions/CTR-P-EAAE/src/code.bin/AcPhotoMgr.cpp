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

// was FUN_0018dba4
unsigned int AcPhotoMgr::Process_VF12()
{
  int param_1 = (int)this;
  FUN_0023c860(param_1 + 0x4d4);
  if (*(char *)(param_1 + 0xe1) == '\x04') {
    FUN_0022bb00(param_1 + 0xec);
  }
  return 2;
}

unsigned int AcPhotoMgr::DemoActor_VF20() {}

void AcPhotoMgr::AcPhotoMgr_VF30() {}

void AcPhotoMgr::AcPhotoMgr_VF31() {}

