/**
 * FUN_0073bad0.c
 * Source line: 1095145
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0073bad0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_2 + 4 + iVar1;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x48);
  param_1[1] = iVar1 + 0x10;
  *param_1 = uVar2;
  return;
}
