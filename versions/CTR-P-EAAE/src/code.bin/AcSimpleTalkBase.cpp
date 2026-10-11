#include "acnlwa/AcSimpleTalkBase.h"
#include "types.h"

extern "C" {
int FUN_0023b9dc(...);
}

AcSimpleTalkBase::~AcSimpleTalkBase() {}

// was FUN_002a84c4
unsigned int AcSimpleTalkBase::Process_VF09()
{
  int param_1 = (int)this;
  FUN_0023b9dc(*(undefined4 *)(param_1 + 0x68));
  return 2;
}

// was FUN_0071cb48
unsigned char AcSimpleTalkBase::DemoActor_VF18()
{
  int param_1 = (int)this;
  return *(byte *)(param_1 + 0x6c) & 1;
}

unsigned int AcSimpleTalkBase::DemoActor_VF19() {}

unsigned int AcSimpleTalkBase::DemoActor_VF20() {}

// was FUN_0071c928
unsigned int AcSimpleTalkBase::DemoActor_VF23()
{
  return 0;
}

// was FUN_0071cb40
unsigned int AcSimpleTalkBase::DemoActor_VF24()
{
  return 0;
}

// was FUN_002a84a4
unsigned int AcSimpleTalkBase::UtlBase_VF30()
{
  return 1;
}

// was FUN_002a849c
unsigned int AcSimpleTalkBase::UtlBase_VF31()
{
  return 2;
}

void AcSimpleTalkBase::UtlBase_VF32() {}

// was FUN_002a84bc
unsigned int AcSimpleTalkBase::UtlBase_VF33()
{
  return 1;
}

// was FUN_002a84b4
unsigned int AcSimpleTalkBase::UtlBase_VF34()
{
  return 2;
}

// was FUN_002a84ac
unsigned int AcSimpleTalkBase::UtlBase_VF35()
{
  return 1;
}

void AcSimpleTalkBase::VF36() {}

