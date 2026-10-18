#include "acnlwa/AcSimpleTalkBase.h"
#include "types.h"

extern "C" {
int FUN_0023b9dc(...);
}

AcSimpleTalkBase::~AcSimpleTalkBase() {}

unsigned int AcSimpleTalkBase::Process_VF09()
{
  FUN_0023b9dc(this->unk_0x68);
  return 2;
}

unsigned int AcSimpleTalkBase::DemoActor_VF18()
{
  return this->unk_0x6c & 1;
}

unsigned int AcSimpleTalkBase::DemoActor_VF19() {}

unsigned int AcSimpleTalkBase::DemoActor_VF20() {}

unsigned int AcSimpleTalkBase::DemoActor_VF23()
{
  return 0;
}

unsigned int AcSimpleTalkBase::DemoActor_VF24()
{
  return 0;
}

unsigned int AcSimpleTalkBase::UtlBase_VF30()
{
  return 1;
}

unsigned int AcSimpleTalkBase::UtlBase_VF31()
{
  return 2;
}

void AcSimpleTalkBase::UtlBase_VF32() {}

unsigned int AcSimpleTalkBase::UtlBase_VF33()
{
  return 1;
}

unsigned int AcSimpleTalkBase::UtlBase_VF34()
{
  return 2;
}

unsigned int AcSimpleTalkBase::UtlBase_VF35()
{
  return 1;
}

void AcSimpleTalkBase::VF36() {}

