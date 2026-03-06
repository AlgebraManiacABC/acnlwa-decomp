/**
 * FUN_005f9630.c
 * Source line: 909761
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005f9630(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 auStack_10 [4];
  
  FUN_0075a000(param_2,auStack_10,4);
  iVar1 = FUN_0056d060((astruct_1 *)**(undefined4 **)(param_1 + 0x8c));
  FUN_0060351c(*(undefined4 *)(param_1 + 0x8c),auStack_10[iVar1],0,0,3);
  if (*(char *)(param_1 + 0xcd) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c) = 1;
  }
  return;
}
