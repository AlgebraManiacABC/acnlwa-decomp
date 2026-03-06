/**
 * FUN_0060de0c.c
 * Source line: 924680
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0060de0c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x310);
  uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  uVar3 = *(undefined4 *)(iVar1 + 0x30);
  *param_1 = *(undefined4 *)(iVar1 + 0x28);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}
