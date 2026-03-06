/**
 * FUN_00142b70.c
 * Source line: 155214
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00142b70(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = FUN_001445bc();
  bVar3 = param_1 <= uVar1;
  if (uVar1 <= param_1) {
    bVar3 = param_1 + param_2 <= param_1;
  }
  if ((!bVar3) && (iVar2 = FUN_001445ac(), param_1 + param_2 <= iVar2 + uVar1)) {
    return iRam00981608 + param_1;
  }
  return 0;
}
