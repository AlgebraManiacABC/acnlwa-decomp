#include "acnlwa/AcNpcTopsChangeDemoDollSpBase.h"
#include "types.h"

extern "C" {
int FUN_0030403c(...);
}

AcNpcTopsChangeDemoDollSpBase::~AcNpcTopsChangeDemoDollSpBase() {}

void AcNpcTopsChangeDemoDollSpBase::UtlBase_VF32() {}

void AcNpcTopsChangeDemoDollSpBase::VF42() {}

void AcNpcTopsChangeDemoDollSpBase::VF61() {}

void AcNpcTopsChangeDemoDollSpBase::VF62() {}

void AcNpcTopsChangeDemoDollSpBase::VF63() {}

void AcNpcTopsChangeDemoDollSpBase::VF64() {}

// was FUN_00343618
bool AcNpcTopsChangeDemoDollSpBase::VF89()
{
  int param_1 = (int)this;
  int iVar1;
  
  iVar1 = FUN_0030403c(*(undefined4 *)(param_1 + 0xb24),param_1 + 0x9a8,0);
  return iVar1 != 0;
}

void AcNpcTopsChangeDemoDollSpBase::VF90() {}

