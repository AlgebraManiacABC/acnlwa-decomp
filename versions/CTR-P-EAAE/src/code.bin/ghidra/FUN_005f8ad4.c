/**
 * FUN_005f8ad4.c
 * Source line: 909125
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005f8ad4(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_20 [12];
  
  FUN_0075a000(param_2,local_20,0xc);
  uVar2 = (int)*(char *)(**(int **)(param_1 + 0x8c) + 4) - 1;
  uVar1 = 0;
  if (uVar2 < 0xc) {
    uVar1 = uVar2;
  }
  FUN_0060351c(*(int **)(param_1 + 0x8c),local_20[uVar1],0,0,3);
  if (*(char *)(param_1 + 0xcd) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c) = 1;
  }
  return;
}
