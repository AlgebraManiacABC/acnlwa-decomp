/**
 * FUN_0051bf34.c
 * Source line: 761160
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0051bf34(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x380);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x90);
  }
  if ((iVar1 == 0 || iVar2 == 0) && (uVar3 = FUN_003da168(), uVar3 < 2)) {
    FUN_0051b624(param_1);
    return;
  }
  return;
}
