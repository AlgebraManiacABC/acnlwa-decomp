/**
 * FUN_002e627c.c
 * Source line: 381232
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002e627c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar2 + 0xc))) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 0x7fffffff;
    }
    *(undefined4 *)(iVar2 + 0x1c0) = uVar1;
  }
  return;
}
