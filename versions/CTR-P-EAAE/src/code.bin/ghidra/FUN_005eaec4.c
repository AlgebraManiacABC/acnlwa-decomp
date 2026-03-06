/**
 * FUN_005eaec4.c
 * Source line: 899568
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005eaec4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 4);
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined2 *)(param_1 + 0x6a) = 3;
  }
  uVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x218))();
  FUN_005fd4b8(param_1 + 100,uVar1,param_2);
  return;
}
