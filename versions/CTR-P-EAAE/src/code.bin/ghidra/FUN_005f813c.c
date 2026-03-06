/**
 * FUN_005f813c.c
 * Source line: 908738
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005f813c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 local_10 [4];
  
  FUN_0075a000(param_2,local_10,4);
  uVar1 = FUN_00625690();
  if ((uVar1 != 0) && ((4 < uVar1 || (uVar1 -= 1, (int)uVar1 < 0)))) {
    uVar1 = 0;
  }
  FUN_0060351c(*(undefined4 *)(param_1 + 0x8c),local_10[uVar1],0,0,3);
  if (*(char *)(param_1 + 0xcd) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c) = 1;
  }
  return;
}
