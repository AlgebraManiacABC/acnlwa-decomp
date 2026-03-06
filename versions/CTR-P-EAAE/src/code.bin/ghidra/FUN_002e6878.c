/**
 * FUN_002e6878.c
 * Source line: 381633
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e6878(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_4 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18c) = param_1;
    *(undefined4 *)(iVar1 + 400) = param_2;
    *(undefined4 *)(iVar1 + 0x194) = param_3;
    *(byte *)(param_4 + 0x14) = *(byte *)(param_4 + 0x14) | 4;
  }
  return;
}
