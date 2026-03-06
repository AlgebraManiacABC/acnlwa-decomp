/**
 * FUN_005f88a0.c
 * Source line: 909067
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005f88a0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 local_1c [10];
  
  FUN_0075a000(param_2,local_1c,10);
  iVar1 = FUN_005c710c();
  if (((iVar1 == 0) || (uVar2 = FUN_007165d0(), 9 < uVar2)) || ((int)uVar2 < 0)) {
    uVar2 = 0;
  }
  FUN_0060351c(*(undefined4 *)(param_1 + 0x8c),local_1c[uVar2],0,0,3);
  if (*(char *)(param_1 + 0xcd) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c) = 1;
  }
  return;
}
