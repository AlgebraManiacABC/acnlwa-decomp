/**
 * FUN_0075b8ec.c
 * Source line: 1116655
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0075b8ec(int *param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  
  psVar1 = (short *)(**(code **)(*param_1 + 0xc))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar3 = 1;
  if ((psVar1 != NULL && iVar2 != 0) && (*psVar1 != 0)) {
    uVar3 = 0;
  }
  return uVar3;
}
