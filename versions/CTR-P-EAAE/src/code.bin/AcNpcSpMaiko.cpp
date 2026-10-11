#include "acnlwa/AcNpcSpMaiko.h"
#include "types.h"

extern "C" {
int FUN_001abbbc(...);
int FUN_00205d80(...);
int FUN_002f74e0(...);
int FUN_00605160(...);
int GET_BYTE_00957322(...);
}

AcNpcSpMaiko::TalkRecept::~TalkRecept() {}

void AcNpcSpMaiko::TalkRecept::VF65() {}

unsigned int AcNpcSpMaiko::TalkRecept::VF80() {}

unsigned int AcNpcSpMaiko::TalkRecept::VF81() {}

unsigned int AcNpcSpMaiko::TalkRecept::VF83() {}

AcNpcSpMaiko::~AcNpcSpMaiko() {}

// was FUN_001f32b4
unsigned int AcNpcSpMaiko::Process_VF09()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x400000,uVar1);
  if (iVar2 != 0) {
    FUN_001abbbc(param_1 + 0x14);
    FUN_00205d80(param_1 + 0x1dd4);
  }
  FUN_00605160(param_1);
  return;
}

unsigned int AcNpcSpMaiko::DemoActor_VF19() {}

unsigned int AcNpcSpMaiko::DemoActor_VF25() {}

unsigned int AcNpcSpMaiko::UtlBase_VF30() {}

unsigned int AcNpcSpMaiko::UtlBase_VF31() {}

void AcNpcSpMaiko::UtlBase_VF32() {}

unsigned int AcNpcSpMaiko::UtlBase_VF34() {}

void AcNpcSpMaiko::VF36() {}

unsigned int AcNpcSpMaiko::VF50() {}

void AcNpcSpMaiko::VF69() {}

void AcNpcSpMaiko::VF71() {}

void AcNpcSpMaiko::VF72() {}

unsigned int AcNpcSpMaiko::VF81() {}

