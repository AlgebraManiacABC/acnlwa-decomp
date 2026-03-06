/**
 * FUN_0069560c.c
 * Source line: 998930
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0069560c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != param_2) {
    iVar1 = param_1 + *(int *)(param_1 + 0x80) * 0xc;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x1c);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  return;
}
