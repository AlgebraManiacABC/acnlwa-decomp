/**
 * FUN_00541820.c
 * Source line: 785577
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00541820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0054466c(*(int *)(param_1 + 0x5c) + 0x130,param_1 + 0x184);
  FUN_00560868(param_1,1,param_1 + 0x134);
  iVar2 = param_1 + 0x134;
  FUN_0012bed8(iVar2);
  puVar1 = *(undefined4 **)(param_1 + 0x17c);
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1,iVar2,0);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  FUN_0012bf54(iVar2);
  return;
}
