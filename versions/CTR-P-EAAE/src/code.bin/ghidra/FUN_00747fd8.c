/**
 * FUN_00747fd8.c
 * Source line: 1103985
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00747fd8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    iVar1 = FUN_003df908();
    if (param_2 < iVar1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
