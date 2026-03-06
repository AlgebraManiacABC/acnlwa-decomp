/**
 * FUN_005eb92c.c
 * Source line: 900584
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005eb92c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 4);
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined2 *)(param_1 + 0x6a) = 4;
  }
  uVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x224))();
  FUN_005fd4b8(param_1 + 100,uVar1,param_2);
  return;
}
