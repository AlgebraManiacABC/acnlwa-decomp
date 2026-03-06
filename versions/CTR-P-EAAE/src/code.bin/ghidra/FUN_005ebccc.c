/**
 * FUN_005ebccc.c
 * Source line: 900741
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005ebccc(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + 4);
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined2 *)(param_1 + 0x6a) = 2;
  }
  piVar1 = *(int **)(iVar3 + 4);
  uVar2 = (**(code **)(*piVar1 + 0x2a8))(piVar1,0xc);
  FUN_005fd4b8(param_1 + 100,uVar2,param_2);
  return;
}
