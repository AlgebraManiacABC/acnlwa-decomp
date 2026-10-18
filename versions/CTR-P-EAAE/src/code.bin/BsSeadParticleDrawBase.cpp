#include "acnlwa/BsSeadParticleDrawBase.h"
#include "types.h"

extern "C" {
int FUN_0020714c(...);
}

BsSeadParticleDrawBase::~BsSeadParticleDrawBase() {}

unsigned int BsSeadParticleDrawBase::Process_VF03() {}

unsigned int BsSeadParticleDrawBase::Process_VF06() {}

unsigned int BsSeadParticleDrawBase::Process_VF09()
{
	return 2;
}

unsigned int BsSeadParticleDrawBase::Process_VF12() {}

void BsSeadParticleDrawBase::VF16() {}

// was FUN_007254ec
unsigned char BsSeadParticleDrawBase::VF17()
{
  int iVar1;
  
  FUN_0020714c();
  iVar1 = FUN_0020714c();
  return *(undefined1 *)(iVar1 + 0x1a);
}

// was FUN_007254d4
unsigned char BsSeadParticleDrawBase::VF18()
{
  int iVar1;
  
  FUN_0020714c();
  iVar1 = FUN_0020714c();
  return *(undefined1 *)(iVar1 + 0x19);
}

// was FUN_00725510
unsigned char BsSeadParticleDrawBase::VF19()
{
  int iVar1;
  
  FUN_0020714c();
  iVar1 = FUN_0020714c();
  return *(undefined1 *)(iVar1 + 0x1b);
}

void BsSeadParticleDrawBase::VF20() {}

