/**
 * FUN_002e5fd0.c
 * Source line: 381036
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002e5fd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x180) = *param_2;
    *(undefined4 *)(iVar1 + 0x184) = param_2[1];
    *(undefined4 *)(iVar1 + 0x188) = param_2[2];
  }
  return;
}
