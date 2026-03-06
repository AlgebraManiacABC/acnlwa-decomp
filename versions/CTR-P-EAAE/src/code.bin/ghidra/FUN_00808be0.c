/**
 * FUN_00808be0.c
 * Source line: 1212104
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00808be0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      FUN_00808be0(param_1,*(undefined4 *)(param_2 + 0xc));
      iVar1 = *(int *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
      FUN_00355ff8(param_2 + 0x20);
      *(int *)(param_1 + 4) = param_2;
      param_2 = iVar1;
    } while (iVar1 != 0);
    return;
  }
  return;
}
