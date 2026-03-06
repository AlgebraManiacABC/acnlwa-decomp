/**
 * FUN_005fa1a4.c
 * Source line: 910576
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005fa1a4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 auStack_14 [6];
  
  FUN_0075a000(param_2,auStack_14,6);
  iVar1 = FUN_0056b970(**(undefined4 **)(param_1 + 0x8c));
  FUN_0060351c(*(undefined4 *)(param_1 + 0x8c),auStack_14[iVar1],0,0,3);
  if (*(char *)(param_1 + 0xcd) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c) = 1;
  }
  return;
}
